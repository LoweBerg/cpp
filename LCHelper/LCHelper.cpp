#include <vector>
#include <filesystem>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

struct item {
    int id;
    int val;
    item() = default;
    item(int id, int val) : id(id), val(val) {}

    bool operator==(const item i) {
        return id == i.id && val == i.val;
    }

    bool operator<(const item &i) {
        return (id == i.id) ? val < i.val : id < i.id;
    }
    
};

// constants
const string savePath = "saves/";

// variables
vector<item> items;
int day;
int lifetime_sum;

const vector<string> names = {"Airhorn", "Apparatice", "Bee Hive", "Big Bolt", "Bottles", "Brass Bell", "Candy", "Cash Register", "Chemical Jug", "Clown Horn", "Coffee Mug", "Comedy", 
                            "Cookie Mold Pan", "Double-Barrel", "Dust Pan", "Egg Beater", "Fancy Lamp", "Flask", "Gift Box", "Gold Bar", "Golden Cup", "Hair Brush", "Hairdryer", "Homemade Flashbang", 
                            "Jar Of Pickles", "Large Axle", "Laser Pointer", "Magic 7 Ball", "Magnifying glass", "Old Phone", "Painting", "Perfume Bottle", "Pill Bottle", "Plastic Fish", "Red Soda", "Remote",
                            "Ring", "Robot Toy", "Rubber Ducky", "Steering Wheel", "Stop Sign", "Tattered Metal Sheet", "Tea Kettle", "Teeth", "Toothpaste", "Toy Cube", "Tragedy", 
                            "V-Type Engine", "Whoopie-Cushion", "Yield Sign"};

ostream& operator<<(ostream &out, const item &i) {
    out << i.id << " " << i.val;
    return out;
}

istream& operator>>(istream &in, item &i) {
    in >> i.id >> i.val;
    return in;
}

bool save(const vector<item> &database, const int &day, const string &filename) {
    ofstream out(savePath + filename);
    if(out.is_open()) {
        out << day << " "<< lifetime_sum << '\n';
        for(const item &i : database) {
            out << i << '\n';
        }
        return true;
    } else
        return false;
}

bool load(const string &filename) {

    vector<item> database;

    ifstream in(savePath + filename);

    if(in.is_open()) {
        string line;

        item i;

        getline(in, line);
        istringstream iss(line);

        iss >> day >> lifetime_sum;

        while(getline(in, line)) {
            istringstream iss(line);
            iss >> i;
            database.push_back(i);
        }

        items = database;

        return true;
    } else {
        return false;
    }
}

vector<bool> solve(int target) {
    int sum = 0;

    for(item &e : items) {
        sum += e.val;
    }

    vector<int> dp(sum + 1);
    dp[0] = -1;

    for(int i = 0; i < items.size(); i++) {
        for(int j = dp.size(); j >= 0; j--) {
            if(j >= items[i].val && abs(dp[j - items[i].val]) && !dp[j]) {
                dp[j] = i + 1;
            }
        }
    }

    int i;
    for(i = target; !dp[i]; i++);

    vector<bool> output(items.size());

    while(dp[i] != -1) {
        output[dp[i] - 1] = true;
        i -= items[dp[i] - 1].val;
    }
    
    return output;
}

vector<string> read() {
    string input;

    getline(cin, input);

    for(char &c : input) {
        tolower(c);
    }

    vector<string> output;

    int start = 0;
    int stop = 0;

    while(stop != -1) {
        stop = input.find(' ', start);
        output.push_back(input.substr(start, stop - start));
        start = stop + 1;
    }

    return output;
}

int main() {

    day = 1;
    lifetime_sum = 0;

    cout << "LCHelper by Lowe Berg \nType \"help\" to receive a list of commands" << endl; 

    start:

    vector<string> input = read();

    if(input[0] == "avg") {
        cout << "Current average per day: " << lifetime_sum/day << endl;
    }

    else if(input[0] == "clear") {
        cout << "Are you sure you want to clear the current inventory?" << endl << "y/n: ";
        input = read();
        if(input[0] == "y") {
            items.clear();
            cout << "Current inventory was successfully cleared" << endl;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    else if(input[0] == "delete") {
        string filename = input[1];
        filesystem::path filepath(savePath + filename + ".txt");

        if(filesystem::exists(filepath)) {
            cout << "Are you sure you want to delete the save?" << endl << "y/n: ";
            input = read();
            
            if(input[0] == "y") {
                filesystem::remove(filepath);
                cout << "Save " << filename << " was successfully deleted" << endl;
            } else {
                cout << "Action was successfully canceled" << endl;
            }
        } else {
            cout << "Savefile named " << filename << " not found" << endl;
        }
    }

    else if(input[0] == "end") {
        cout << "Day " << day << " ended" << endl;

        day += 1;
    }

    else if(input[0] == "exit") {
        cout << "Are you sure you want to exit the program?" << endl << "y/n: ";
        input = read();
        if(input[0] == "y") {
            cout << "Exiting program..." << endl;
            return 0;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    else if(input[0] == "help") {
        cout << "--- Commands for the LCHelper program ---" << endl;
        cout << "avg - Displays the average value collected per day" << endl;
        cout << "clear - Removes all items from the inventory" << endl;
        cout << "delete [file name] - Deletes a save file" << endl;
        cout << "end - Increments the day counter" << endl;
        cout << "exit - Closes the program" << endl;
        cout << "help - Displays this text" << endl;
        cout << "load [file name] - Loads a save file from the memory" << endl;
        cout << "pop [item id] [item value] - Removes an item from the inventory" << endl;
        cout << "push [item id] [item value] - Adds an item to the inventory" << endl;
        cout << "reset - Resets the inventory and day counter" << endl;
        cout << "save [file name] - Saves the current game to memory" << endl;
        cout << "solve [qouta amount] - Displays which items to keep or sell from the inventory to get as close to the quota as possible without subceeding it" << endl;
        cout << "sum - Displays the total value of the inventory and the lifetime sum of the run" << endl;
        cout << "view" << endl << "       day - Displays the current day number" << endl;
        cout << "       inventory - Displays all items in the inventory" << endl;
        cout << "       saves - Displays all save files in memory" << endl;
        cout << "------------------------" << endl;
    }

    else if(input[0] == "load") {
        string filename = input[1];

        if(load(filename + ".txt")) {
            cout << "Game loaded from file " << '\"' << filename << '\"' << endl;
        } else {
            cout << "Savefile named " << filename << " not found" << endl; 
        }
    }

    else if(input[0] == "pop") {

        int id = stoi(input[1]);
        int value = stoi(input[2]);

        int i;
        for(i = 0; i < items.size() && items[i].id != id && items[i].val != value; i++);

        if(i < items.size()) {
            swap(items.back(), items[i]);
            items.pop_back();

            cout << "Removed " << names[id] << " worth " << value << endl;
        }
        else {
            cout << "No " << names[id] << " worth " << value << " was found" << endl;
        }
    }

    else if(input[0] == "push") {

        item item;

        cin >> item.id >> item.val;

        items.push_back(item);
        
        cout << "Added " << names[item.id] << " worth " << item.val << endl;
    }

    else if(input[0] == "reset") {
        cout << "Are you sure you want to reset?" << endl << "y/n: ";
        input = read();
        if(input[0] == "y") {
            day = 1;
            items.clear();

            cout << "Game was successfully reset" << endl;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    else if(input[0] == "save") {
        string filename = input[1];

        if(save(items, day, filename + ".txt")) {
            cout << "Game saved to file " << '\"' << filename << '\"' << endl;
        } else {
            cout << "There was an error saving your game" << endl;
        }
    }

    else if(input[0] == "solve") {
        int target = stoi(input[1]);
        vector<bool> output = solve(target);

        cout << "--- Items to Sell ---" << endl;
        cout << "Id - Name - Value" << endl;
        for(int i = 0; i < items.size(); i++) {
            if(output[i])
                cout << items[i].id << " - " << names[items[i].id] << " - " << items[i].val << endl;
        }

        cout << "--- Items to Keep ---" << endl;
        cout << "Id - Name - Value" << endl;
        for(int i = 0; i < items.size(); i++) {
            if(!output[i])
                cout << items[i].id << " - " << names[items[i].id] << " - " << items[i].val << endl;
        }

        int sum = 0;

        for(int i = 0; i < items.size(); i++) {
            if(output[i])
                sum += items[i].val;
        }

        cout << "Total Value of Sale: " << sum << endl;

        cout << "Sell Items?" << endl << "y/n: ";
        input = read();
        if(input[0] == "y") {
            vector<item> toSell;
            for(int i = 0; i < items.size(); i++) {
                if(output[i])
                    toSell.push_back(items[i]);
            }

            int newSize = items.size();

            while(!toSell.empty()) {
                for(int i = 0; i < items.size(); i++) {
                    if(toSell.back() == items[i]) {
                        swap(items[i], items[--newSize]);
                        i = items.size();
                    }
                }
                toSell.pop_back();
            }

            items.resize(newSize);
            lifetime_sum += sum;
            cout << "Items were successfully sold" << endl;
        }

        else {
            cout << "Command canceled" << endl;
        }
    }

    else if(input[0] == "sort") {
        sort(items.begin(), items.end());
        cout << "Inventory has been sorted" << endl;
    } 

    else if(input[0] == "sum") {
        int sum = 0;

        for(item &e : items) {
            sum += e.val;
        }

        cout << "Current value of inventory: " << sum << endl;
        cout << "Lifetime sum: " << lifetime_sum << endl;
    }

    else if(input[0] == "view") {

        if(input[1] == "day") {
            cout << "Current day: " << day << endl;
        }

        else if(input[1] == "inventory") {
            if(items.size() == 0) {
                cout << "Ship is currently empty" << endl;
                goto start;
            }

            cout << "--- Current items on ship ---" << endl;
            cout << "Id - Item - Value" << endl;
            for(auto e : items) {
                cout << e.id << " - " << names[e.id] << " - " << e.val << endl;
            }

            cout << "------------------------" << endl;
        } 
        
        else if(input[1] == "saves") {
            cout << "--- Save files found ---" << endl;
            for(filesystem::path entry : filesystem::directory_iterator(savePath)) {
                cout << entry.stem() << endl;
            }
            cout << "------------------------" << endl;
        }
    }

    else {
        cout << "Command \"" << input[0] << "\" is not valid" << endl;
    }

    goto start;
}