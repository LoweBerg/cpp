#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;

    priority_queue<int, vector<int>,greater<int>> q;
    int x;
    int y;

    for(int i = 0; i < n; i++) {
        cin >> x;
        cin >> y;
        q.push((abs(x)+abs(y)) * 2);
    }

    int output = 0;

    for(int i = 0; i < n; i++) {
        t -= q.top();
        if(t < 0) {
            break;
        }
        q.pop();
        output++;
    }

    cout << output;
}