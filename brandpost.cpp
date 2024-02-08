#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <cmath>

#define ll long long

using namespace std;

struct compare {
    bool operator()(tuple<ll, ll, ll, ll, ll> n1, tuple<ll, ll, ll, ll, ll> n2) {
        if(get<0>(n1) == get<0>(n2)) {
            return get<1>(n1) > get<1>(n2);
        } 

        return get<0>(n1) > get<0>(n2);
    }
};

ll calc_wet(ll x, ll y, vector<vector<bool>>* sources, ll t){
    ll res = 0;
    for(ll i = -t; i <= t; i++) {
        if(y+i < 0 || y+i >= sources->size())
            continue;
        for(ll j = -(t-abs(i)); j <= t-abs(i) ; j++) {
            if(x+j < 0 || x+j >= sources->at(0).size())
                continue;
            if(sources->at(y+i)[x+j]) {
                res += t - (abs(y-(y+i)) + abs(x-(x+j))) + 1;
            }
        }
    }

    return res;
}


int main() {
    ll w, h, n;
    cin >> w >> h >> n;

    vector<vector<bool>> visited(h, vector<bool>(w));
    vector<vector<bool>> sources(h, vector<bool>(w));

    ll cw = 0;

    ll sx, sy;

    for(ll i = 0; i < n; i++) {
        cin >> sx >> sy;
        sources[sy-1][sx-1] = true;
        if(sx == 0 && sy == 0)
            cw = 1;
    }

    // wetness of current, distance from goal, time at current, current x, current y
    priority_queue<tuple<ll, ll, ll, ll, ll>, vector<tuple<ll, ll, ll, ll, ll>>, compare> q;

    ll cx, cy, cd, ct;

    q.push({cw, abs(w-1-0)+abs(h-1-0), 0, 0, 0});
    visited[0][0] = true;

    while(!q.empty()) {
        cw = get<0>(q.top());
        ct = get<2>(q.top());
        cx = get<3>(q.top());
        cy = get<4>(q.top());

        q.pop();

        if(cx == w-1 && cy == h-1) {
            break;
        }

        if(cx + 1 < w && !visited[cy][cx+1]) {
            visited[cy][cx+1] = true;
            q.push({cw+calc_wet(cx+1, cy, &sources, ct+1), abs(w-cx)+abs(h-1-cy), ct+1, cx+1, cy});           
        }
        if(cy + 1 < h && !visited[cy+1][cx]) {
            visited[cy+1][cx] = true;
            q.push({cw+calc_wet(cx, cy+1, &sources, ct+1), abs(w-1-cx)+abs(h-cy), ct+1, cx, cy+1});           
        }
    }

    cout << cw;
}