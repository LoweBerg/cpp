#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

struct edge {

    ll i;
    ll w;

    edge(ll i_, ll w_) {
        i = i_;
        w = w_;
    }
};

ll n, m;
vector<double> result;

void dfs(vector<vector<edge>>* adj, ll c, ll d, ll w) {
    if(c == n-1) {
        result.push_back((double)w / d);
    } else {
        for(auto e : adj->at(c)) {
            dfs(adj, e.i, d+1, w+e.w);
        }
    }
}

int main() {
    cin >> n >> m;
    vector<vector<edge>> adj(n);

    ll u, v, w;

    for(int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        adj[u-1].push_back(edge(v-1, w));
    }

    dfs(&adj, 0, 0, 0);

    make_heap(result.begin(), result.end());

    cout << result[0] << endl;
}