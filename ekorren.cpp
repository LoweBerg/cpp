#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int bfs(vector<vector<int>>* adj, int start, int dist, vector<int>* nuts) {

    vector<bool> visited((*adj).size(), false);
    queue<tuple<int, int>> nodes;
    nodes.push(tuple(start, dist));
    visited[start] = true;
    int current;

    while (nodes.size() > 0) {


        current = get<0>(nodes.front());
        dist = get<1>(nodes.front()) + 1;
        nodes.pop();

        for(int node : (*adj)[current]) {
            if (visited[node]) {
                goto cont;
            }

            nodes.push(tuple(node, dist));
            visited[node] = true;

            if((*nuts).size() > 0) {
                for(int i = 0; i < (*nuts).size(); i++) {
                    if((*nuts)[i] == node) {
                        (*nuts).erase((*nuts).begin() + i);
                        return bfs(adj, node, dist, nuts);
                    }
                }
            } else if(node == 0) {
                return dist;
            }
            cont:;
        }
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

    cout << bfs(&adj, 0, 0, &nuts);
}