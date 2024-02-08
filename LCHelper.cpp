#include <bits/stdc++.h>

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

vector<item> items;

const vector<string> names = {"Airhorn", "Apparatice", "Bee Hive", "Big Bolt", "Bottles", "Brass Bell", "Candy", "Cash Register", "Chemical Jug", "Clown Horn", "Coffee Mug", "Comedy", 
                            "Cookie Mold Pan", "Double-Barrel", "Dust Pan", "Egg Beater", "Fancy Lamp", "Flask", "Gift Box", "Gold Bar", "Golden Cup", "Hair Brush", "Hairdryer", "Homemade Flashbang", 
                            "Jar Of Pickles", "Large Axle", "Laser Pointer", "Magic 7 Ball", "Magnifying glass", "Old Phone", "Painting", "Perfume Bottle", "Pill Bottle", "Plastic Fish", "Red Soda", "Remote",
                            "Ring", "Robot Toy", "Rubber Ducky", "Steering Wheel", "Stop Sign", "Tattered Metal Sheet", "Tea Kettle", "Teeth", "Toothpaste", "Toy Cube", "Tragedy", 
                            "V-Type Engine", "Whoopie-Cushion", "Yield Sign"};

ostream& operator<<(ostream &out, const item &i) {
    out << i.id << ' ' << i.val;
    return out;
}

istream& operator>>(istream &in, item &i) {
    in >> i.id >> i.val;
    return in;
}

void save(const vector<item> &database, const int &day, const string &filename) {
    ofstream out(filename);
    if(out.is_open()) {
        out << day << '\n';
        for(const item &i : database) {
            out << i.id << " " << i.val << '\n';
        }
    } else
        cout << "error opening file" << endl;
}

vector<item> load(const string &filename, int* day) {

    vector<item> database;

    ifstream in(filename);
    string line;

    item i;

    getline(in, line);
    istringstream iss(line);

    iss >> *day;

    while(getline(in, line)) {
        istringstream iss(line);
        iss >> i;
        database.push_back(i);
    }

    return database;
}

void solve(int target) {
    vector<bool> active(items.size(), true);

    vector<bool> best;
    int best_val;
    
    int sum = 0;

    for(item &e : items) {
        sum += e.val;
    }

    best_val = sum;

    queue<state> q;

    q.push(state(active, sum, 0));

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

    cout << "--- Values to sell ---" << endl;
    for(int i = 0; i < items.size(); i++) {
        if(active[i])
            cout << items[i].val << endl;
    }

    cout << "--- Values to keep ---" << endl;
    for(int i = 0; i < items.size(); i++) {
        if(!active[i])
            cout << items[i].val << endl;
    }
    
    cout << "Value of sale: " << best_val << endl;
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

    int day = 1;

    start:

    string input = read();

    for(char &c : input) {
        tolower(c);
    }

    if(input == "exit") {
        return 0;
    }

    if(input == "push") {

        item item;

        cin >> item.id >> item.val;

        items.push_back(item);
        cout << "Added " << names[item.id] << " worth " << item.val << endl;
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

    if(input == "sum") {
        int sum = 0;

        for(item &e : items) {
            sum += e.val;
        }

        cout << "Current value of inventory: " << sum << endl;
    }

    if(input == "end") {
        cout << "Day " << day << " ended" << endl;

        day += 1;
    }

    if(input == "avg") {
        double sum = 0;

        for(item &e : items) {
            sum += e.val;
        }

        cout << "Current average per day: " << sum/day << endl;
    }

    if(input == "view") {
        cout << "Current items on ship:" << endl;

        for(auto e : items) {
            cout << names[e.id] << " - " << e.val << endl;
        }
    }

    if(input == "save") {
        string filename = read();

        save(items, day, filename + ".txt");

        cout << "Game saved to file " << "\"" << filename << "\"" << endl;
    }

    if(input == "load") {

    }

    goto start;
}