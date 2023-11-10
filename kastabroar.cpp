#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<tuple<int, int>> dfs(vector<vector<int>>* u, vector<bool>* visited, int current, int parent) {
    vector<tuple<int, int>> res;
    
    visited->at(current) = true;

    for(int e: u->at(current)) {
        if(parent == e) {
            continue;
        } else if(visited->at(e)) {
            res.push_back(tuple(current, e));
        } else {
            vector<tuple<int, int>> append;
            append = dfs(u, visited, e, current);
            res.insert(res.end(), append.begin(), append.end());
        }
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> u(n);

    vector<bool> visited(m);

    int x;
    int y;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        u[x-1].push_back(y-1);
        u[y-1].push_back(x-1);
    }

    vector<tuple<int, int>> extra;
    vector<tuple<int, int>> append;
    vector<int> parents;

    for(int i = 0; i < visited.size(); i++) {
        if(!visited[i]) {
            parents.push_back(i);
            append = dfs(&u, &visited, i, -1);
            extra.insert(extra.end(), append.begin(), append.end());
        }
    }

    if(m < n-1) {
        cout << "Nej";
    } else {
        cout << "Ja" << endl;
        cout << parents.size()-1 << endl;
        for(int i = 1; i < parents.size(); i++) {
            
        }
    }
}