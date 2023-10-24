#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int bfs(vector<vector<int>>* adj, int start, int dist, vector<int>* nuts, vector<int>* startDist) {

    vector<bool> visited((*adj).size(), false);
    queue<vector<int>> nodes;
    nodes.push(vector<int>{start, dist});
    visited[start] = true;

    while (nodes.size() > 0) {
        
        int c = nodes.front().at(0);
        int d = nodes.front().at(1);
        nodes.pop();

        for(auto v : (*adj)[c]) {
            if(!visited[v]) {
                visited[v] = true;
                nodes.push(vector<int>{v, d+1});
            }
        }

        for(int i = 0; i < (*nuts).size(); i++) {
            if(c == (*nuts)[i]) {
                (*nuts).erase((*nuts).begin()+i);
                return bfs(adj, c, d, nuts, startDist);
            }
        }

        if((*nuts).size() == 0) {
            if((*startDist)[c] != -1)
                return((*startDist)[c] + d);
        }

        if(start == 0)
            (*startDist)[c] = d;

    }
    
    return -1;
}

int main() {

    int nodes;
    int nuts_len;
    int path = 0;

    cin >> nodes;
    cin >> nuts_len;

    vector<vector<int>> adj(nodes, vector<int>());
    vector<int> nuts;
    int nut;
    int node1;
    int node2;

    for (int i = 0; i < nuts_len; i++) {
        cin >> nut;
        nuts.push_back(nut - 1);
    }

    for (int i = 1; i < nodes; i++) {
        cin >> node1;
        node1--;
        cin >> node2;
        node2--;

        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    vector<int> startDist(nodes, -1);

    cout << bfs(&adj, 0, 0, &nuts, &startDist);
}