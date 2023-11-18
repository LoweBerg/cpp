#include <iostream>
#include <vector>
#include <unordered_set>

#define ll long long

using namespace std;

ll dfs(vector<vector<int>>* adj, unordered_set<int>* nuts, int parent, int current) {
    ll count = 0;

    for(int e : adj->at(current)) {
        if(e != parent)
            count += dfs(adj, nuts, current, e);
    }

    if (count != 0) {
        count += 2;
    }

    if(count == 0 && nuts->find(current) != nuts->end()) {
        count = 2;
    } 
    
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;

    unordered_set<int> nuts;
    int temp;

    for(int i = 0; i < k; i++) {
        cin >> temp;
        nuts.insert(temp-1);
    }

    vector<vector<int>> adj(n);
    int a, b;
    for(int i = 1; i < n; i++) {
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }

    cout << dfs(&adj, &nuts, -1, 0) - 2;
}