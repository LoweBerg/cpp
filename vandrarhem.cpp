#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {

    int people;

    cin >> people;

    int bed_types;

    cin >> bed_types;

    int input_cost;
    int input_number;
    vector<int> beds {};

    for (int i = 0; i < bed_types; i++) {
        cin >> input_cost;
        cin >> input_number;

        for (int j = 0; j < input_number; j++) {
            beds.push_back(input_cost);
        }
    }

    priority_queue <int, vector<int>, greater<int>> q(beds.begin(), beds.end());

    int cost = 0;

    while (people > 0) {
        cost += q.top();

        q.pop();

        people -= 1;
    }

    cout << cost << endl;

    return 0;
}