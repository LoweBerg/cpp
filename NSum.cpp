#include <bits/stdc++.h>

using namespace std;


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

int main() {
    vector<int> items{106, 31, 71, 43, 44, 45, 53, 81, 77, 93, 32, 53, 80, 77, 61, 54, 39, 74, 54, 61, 82, 104, 51, 35, 54, 50, 38, 32, 40, 80};
    int target = 1267;

    vector<bool> active(items.size(), true);

    vector<bool> best;
    int best_val;
    
    int sum = 0;

    for(int e : items) {
        sum += e;
    }

    best_val = sum;

    queue<state> q;

    q.push(state(active, sum, 1));
    active[0] = false;
    q.push(state(active, sum - items[0], 1));
    active[0] = true;

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
        current.value -= items[current.index];
        q.push(state(current.active, current.value, current.index + 1));
    }

    for(bool e : best) {
        cout << e << endl;
    }
    
    cout << "Value of sale: " << best_val;
}