#include <bits/stdc++.h>

using namespace std;

vector<int> items;

void solve(vector<int>* items, int target) {

    for(int i = 0; i < pow(2, items->size()); i++) {
        
    }
}

int main() {

    int day = 1;

    start:

    string input;

    cin >> input;

    for(char &c : input) {
        tolower(c);
    }

    if(input == "exit")
        return 0;

    if(input == "push") {

        int item;

        cin >> item;

        items.push_back(item);
        cout << "Added item worth " << item << endl;
    }

    if(input == "pop") {

        int item;

        cin >> item;

        int index;
        int i;

        for(i = 0; i < items.size(); i++) {
            if(items[i] == item) {
                index = i;
                break;
            }
        }

        if(i < items.size()) {
        swap(items.back(), items[index]);
        items.pop_back();

        cout << "Removed item worth " << item << endl;
        }
        else {
            cout << "No item worth " << item << " was found" << endl;
        }
    }

    if(input == "sum") {
        int sum = 0;

        for(int e : items) {
            sum += e;
        }

        cout << "Current value of inventory: " << sum << endl;
    }

    if(input == "end") {
        day += 1;

        cout << "Day " << day - 1 << " ended" << endl;
    }

    if(input == "avg") {
        double sum = 0;

        for(int e : items) {
            sum += e;
        }

        cout << "Current average per day: " << sum/day << endl;
    }

    if(input == "view") {
        for(auto e : items) {
            cout << e << endl;
        }
    }

    goto start;
}