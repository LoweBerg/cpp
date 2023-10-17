#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

void bfs(vector<vector<int>>* matrix, int start) {

    vector<bool> visited((*matrix).size(), false);
    queue<tuple<int, int>> nodes;
    nodes.push(tuple(0, 0));
    int current;
    int dist;

    while (nodes.size() > 0) {

        current = get<0>(nodes.front());
        nodes.pop();

        for (int node : (*matrix)[current]) {
            if (visited[node]) {
                continue;
            }


        }

    }
    

}

int main() {

    int nodes;
    int nuts_len;
    int path = 0;

    cin >> nodes;
    cin >> nuts_len;

    vector<vector<int>> matrix(nodes, vector<int>());
    vector<int> nuts;
    int nut;
    int node1;
    int node2;

    for (int i = 0; i < nuts_len; i++) {
        cin >> nut;
        nuts.push_back(nut);
    }

    for (int i = 1; i < nodes; i++) {
        cin >> node1;
        node1--;
        cin >> node2;
        node2--;

        matrix[node1].push_back(node2);
        matrix[node2].push_back(node1);
    }
}