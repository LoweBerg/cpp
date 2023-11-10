#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void dfs(vector<vector<int>>* u, vector<bool>* visited, vector<tuple<int,int>>* extra, int current, int parent) {
    
    visited->at(current) = true;

    for(int e: u->at(current)) {
        if(parent == e) {
            continue;
        } else if(visited->at(e)) {
            if(e > current)
                extra->push_back(tuple(current, e));
        } else {
            dfs(u, visited, extra, e, current);
        }
        cont:;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> u(n);

    vector<bool> visited(n);

    int x;
    int y;

    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        u[x-1].push_back(y-1);
        u[y-1].push_back(x-1);
    }

    vector<tuple<int, int>> extra;
    vector<int> parents;

    for(int i = 0; i < visited.size(); i++) {
        if(!visited[i]) {
            parents.push_back(i);
            dfs(&u, &visited, &extra, i, -1);
        }
    }

    if(m < n-1) {
        cout << "Nej";
    } else {
        cout << "Ja" << endl;
        cout << parents.size()-1 << endl;
        for(int i = 0; i < parents.size()-1; i++) {
            cout << get<0>(extra[i])+1 << " " << get<1>(extra[i])+1 << " " << parents[i]+1 << " " << parents[i+1]+1 << endl;
        }
    }
}