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
    vector<int> items{54, 106, 50, 71, 76, 31, 70, 43, 65, 68, 44, 67, 41, 32, 54, 30, 48, 20, 26, 28, 43, 29, 17, 53};
    int target = 722;

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