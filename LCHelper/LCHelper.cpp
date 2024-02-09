#include <bits/stdc++.h>
#include <filesystem>

using namespace std;

struct item {
    int id;
    int val;
    item() = default;
    item(int id, int val) : id(id), val(val) {}
};

struct state{
    vector<bool> active;
    int value;
    int index;
    state(vector<bool> _active, int _value, int _index) {
        active = _active;
        value = _value;
        index = _index;
    }
};

const string savePath = "saves/";

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

void solve(int target) {
    vector<bool> best;
    int best_val;
    
    int sum = 0;

    for(item &e : items) {
        sum += e.val;
    }

    best_val = sum;

    queue<state> q;

    q.push(state(vector<bool>(items.size(), true), sum, 0));

    while(!q.empty()) {
        state current = q.front();
        q.pop();

        if(current.value < target)
            continue;

        if(current.value < best_val) {
            best_val = current.value;
            best = current.active;
        }

        if(current.value == target) {
            best_val = current.value;
            best = current.active;
            break;
        }

        q.push(state(current.active, current.value, current.index + 1));
        current.active[current.index] = false;
        current.value -= items[current.index].val;
        q.push(state(current.active, current.value, current.index + 1));
    }

    if(best_val < target) {
        cout << "Value on ship is insufficient for the chosen target" << endl;
        return;
    }

    if(best_val > target) {
        cout << "Total value of sale will exceed the target value by " << best_val - target << " credits" << endl;
    }

    cout << "--- Items to sell ---" << endl;
    for(int i = 0; i < items.size(); i++) {
        if(best[i])
            cout << names[items[i].id] << " - " << items[i].val << endl;
    }

    cout << "--- Items to keep ---" << endl;
    for(int i = 0; i < items.size(); i++) {
        if(!best[i])
            cout << names[items[i].id] << " - " << items[i].val << endl;
    }
    
    cout << "Value of sale: " << best_val << endl;
    cout << "------------------------" << endl;
}

string read() {
    string input;

    cin >> input;

    for(char &c : input) {
        tolower(c);
    }

    return input;
}

int main() {

    day = 1;
    lifetime_sum = 0;

    cout << "LCHelper by Lowe Berg \nType \"help\" to receive a list of commands" << endl; 

    start:

    string input = read();

    if(input == "avg") {
        double sum = 0;

        for(item &e : items) {
            sum += e.val;
        }

        cout << "Current average per day: " << sum/day << endl;
    }

    if(input == "clear") {
        cout << "Are you sure you want to clear the current inventory?" << endl << "y/n: ";
        input = read();
        if(input == "y") {
            items.clear();
            cout << "Current inventory was successfully cleared" << endl;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    if(input == "delete") {
        string filename = read();
        filesystem::path filepath(savePath + filename + ".txt");

        if(filesystem::exists(filepath)) {
            cout << "Are you sure you want to delete the save?" << endl << "y/n: ";
            input = read();
            
            if(input == "y") {
                filesystem::remove(filepath);
                cout << "Save " << filename << " was successfully deleted" << endl;
            } else {
                cout << "Action was successfully canceled" << endl;
            }
        } else {
            cout << "Savefile named " << filename << " not found" << endl;
        }
    }

    if(input == "end") {
        cout << "Day " << day << " ended" << endl;

        day += 1;
    }

    if(input == "exit") {
        cout << "Are you sure you want to exit the program?" << endl << "y/n: ";
        input = read();
        if(input == "y") {
            cout << "Exiting program..." << endl;
            return 0;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    if(input == "help") {
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

    if(input == "load") {
        string filename = read();

        if(load(filename + ".txt")) {
            cout << "Game loaded from file " << '\"' << filename << '\"' << endl;
        } else {
            cout << "Savefile named " << filename << " not found" << endl; 
        }
    }

    if(input == "pop") {

        int id;
        int value;

        cin >> id >> value;

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

    if(input == "push") {

        item item;

        cin >> item.id >> item.val;

        items.push_back(item);
        lifetime_sum += item.val;
        
        cout << "Added " << names[item.id] << " worth " << item.val << endl;
    }

    if(input == "reset") {
        cout << "Are you sure you want to reset?" << endl << "y/n: ";
        input = read();
        if(input == "y") {
            day = 1;
            items.clear();

            cout << "Game was successfully reset" << endl;
        } else {
            cout << "Action was successfully canceled" << endl;
        }
    }

    if(input == "save") {
        string filename = read();

        if(save(items, day, filename + ".txt")) {
            cout << "Game saved to file " << '\"' << filename << '\"' << endl;
        } else {
            cout << "There was an error saving your game" << endl;
        }
    }

    if(input == "solve") {
        int target;
        cin >> target;
        solve(target);
    }

    if(input == "sum") {
        int sum = 0;

        for(item &e : items) {
            sum += e.val;
        }

        cout << "Current value of inventory: " << sum << endl;
        cout << "Lifetime sum: " << lifetime_sum << endl;
    }

    if(input == "view") {
        input = read();

        if(input == "day") {
            cout << "Current day: " << day << endl;
        }

        if(input == "inventory") {
            if(items.size() == 0) {
                cout << "Ship is currently empty" << endl;
                goto start;
            }

            cout << "--- Current items on ship ---" << endl;
            cout << "item - value" << endl;
            for(auto e : items) {
                cout << names[e.id] << " - " << e.val << endl;
            }

            cout << "------------------------" << endl;
        } 
        
        if(input == "saves") {
            cout << "--- Save files found ---" << endl;
            for(filesystem::path entry : filesystem::directory_iterator(savePath)) {
                cout << entry.stem() << endl;
            }
            cout << "------------------------" << endl;
        }
    }

    goto start;
}