#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    int n, m;
    cout << "n ? ";
    cin >> n;
    cout << "m ? ";
    cin >> m;
    vector<vector<char>> g(n, vector<char>(m));
    for(int i = 0; i < n; i++) {
        cout << "Rad " << i+1 << " ? ";
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    int r, c;
    queue<tuple<int, int>> q;
    q.push({0, 0});
    string msg = "";

    while(!q.empty()) {
        r = get<0>(q.front());
        c = get<1>(q.front());
        q.pop();

        if(g[r][c] != '.') {
            msg.push_back(g[r][c]);
            g[r][c] = '.';
            q = queue<tuple<int, int>>();
            q.push({r, c});
            continue;
        }

        if(r == n-1 && c == m-1) {
            break;
        }

        if(r < n-1) {
            q.push({r+1, c});
        }

        if(c < m-1) {
            q.push({r, c+1});
        }
    }

    cout << "Svar: " << msg;
}