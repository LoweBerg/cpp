#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int search(vector<vector<int>>* adj, unordered_set<int>* nuts, vector<bool>* visited, int i) {
    visited->at(i) = true;
    int count = 0;

    for(int n : adj->at(i)) {
        if(!visited->at(n))
            count += search(adj, nuts, visited, n);        
    }

    if(count > 0) {
        count += 2;
    }

    if(nuts->find(i) != nuts->end() && count == 0) {
        count = 2;
    }

    return count;
}

int main() {

    int nodes;
    int nuts_len;
    int path = 0;

    cin >> nodes;
    cin >> nuts_len;

    vector<vector<int>> adj(nodes, vector<int>());
    unordered_set<int> nuts;
    int nut;
    int node1;
    int node2;

    for (int i = 0; i < nuts_len; i++) {
        cin >> nut;
        nuts.insert(nut - 1);
    }

    for (int i = 1; i < nodes; i++) {
        cin >> node1;
        node1--;
        cin >> node2;
        node2--;

        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    vector<bool> visited(nodes);

    int ans = search(&adj, &nuts, &visited, 0);
    cout << ans - 2;
}