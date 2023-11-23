#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

struct least_wet {
    bool operator()(pair<int, pair<int, pair<int, int>>> n1, pair<int, pair<int, pair<int, int>>> n2) {
        return n1.first > n2.first;
    }
};


int main() {
    int w, h, n;
    cin >> w >> h >> n;

    vector<vector<vector<int>>> m;
    vector<pair<int, int>> sources(n);

    for(int i = 0; i < n; i++) {
        cin >> sources[i].first >> sources[i].second;
        sources[i].first--;
        sources[i].second--;
    }

    // wetness of current, time at current, current x, current y
    priority_queue<pair<int, pair<int, pair<int, int>>>, vector<pair<int, pair<int, pair<int, int>>>>, least_wet> q;
    q.push(make_pair(0, make_pair(0, make_pair(0, 0))));

    int cx, cy, cw, ct;    

    while(!q.empty()) {
        cw = q.top().first;
        ct = q.top().second.first;
        cx = q.top().second.second.first;
        cy = q.top().second.second.second;

        if(ct > m.size()) {
            vector<vector<int>> temp(h, vector<int>(w));
            for(auto e : sources) {
                for(int i = e.first-ct; i <= e.first+ct; i++) {
                    if(i > 0 && i < h) {
                        for(int j = abs(); j <= e.second+ct; j++) {

                        }
                    }
                }
            }
        }
    }

}