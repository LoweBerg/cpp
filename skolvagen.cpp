#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

struct leastDist {
    bool operator()(tuple<int, int, int> e1, tuple<int, int, int> e2) {
        return get<2>(e1) > get<2>(e2);
    }
};

int travel(vector<vector<int>> path) {
    priority_queue<tuple<int, int, int>, vector<tuple<int,int,int>>, leastDist> q;

    vector<vector<bool>> visited(2, vector<bool>(path[0].size()));

    q.push({0, 0, 0});

    while(!q.empty()) {
        int cx = get<0>(q.top());
        int cy = get<1>(q.top());
        int d = get<2>(q.top());
        q.pop();

        if(!visited[cx][cy]) {
            continue;
        }

        visited[cx][cy] = true;

        if(cx == 0 && cy == path[0].size()-1)
            return d;

        if(path[cx][cy] == 0 && cy < path[0].size()) {
            q.push({cx, cy+1, d});
        } else {
            q.push({cx, cy+1, d+1});
            q.push({!cx, cy, d+1});
        }
    }

    return -1;
}

int main() {
    string path;

    cin >> path;

    // path = "SNBNNSB";

    vector<vector<int>> dp(2, vector<int>(path.size()+1));

    for(int i = 1; i < path.size(); i++) {
        if(path[i] == 'N')
            dp[0][i] = 1;
        if(path[i] == 'S')
            dp[1][i] = 1;
        else {
            dp[0][i] = 1;
            dp[1][i] = 1;
        }
    }
    
    cout << travel(dp) << endl;
}