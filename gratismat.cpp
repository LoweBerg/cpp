#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    int p;
    int start;

    for(int i = 0; i < n; i++) {
        cin >> p;
        if(p > 0)
            adj[p-1].push_back(i);
        else
            start = i;
    }

    unordered_set<int> s;

    for(int i = 0; i < m; i++) {
        cin >> p;
        s.insert(p-1);
    }

    int count = 0;
    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        int current = q.front();
        q.pop();

        if(s.find(current) != s.end()) {
            count++;
        } else {
            for(int e : adj[current]) {
                q.push(e);
            }
        }

        while(0) {};
    }

    

    cout << count;
}