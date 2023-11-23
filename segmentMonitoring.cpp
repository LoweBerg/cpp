#include <iostream>
#include <unordered_set>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

struct greater_val {
    bool operator()(pair<ll, ll> e1, pair<ll, ll> e2) {
        return e1.second < e2.second;
    }
};

struct lesser_val {
    bool operator()(pair<ll, ll> e1, pair<ll, ll> e2) {
        return e1.second > e2.second;
    }
};

int main() {
    ll xmin, xmax;
    cin >> xmin >> xmax;

    ll q;
    cin >> q;
    
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater_val> start;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, lesser_val> end;
    unordered_set<ll> removed;

    char inst;

    ll s, a, b;
    vector<int> ans(q, -1);

    ll last;

    for(ll i = 0; i < q; i++) {
        cin >> inst;

        if(inst == '+') {
            cin >> s >> a >> b;
            if(a <= xmin) {
                start.push(make_pair(s, b));
            } else if(b >= xmax) {
                end.push(make_pair(s, a));
            }
        } else {
            cin >> s;
            
            removed.insert(s);
        }

        while(start.size() > 0 && removed.find(start.top().first) != removed.end()) {
            removed.erase(start.top().first);
            start.pop();
        }

        last = (start.size() > 0) ? start.top().second : xmin;

        if(last >= xmax) {
            ans[i] = 1;
            continue;
        }

        while(end.size() > 0 && removed.find(end.top().first) != removed.end()) {
            removed.erase(end.top().first);
            end.pop();
        }

        if(end.size() > 0 && end.top().second <= last) {
            ans[i] = 2;
        }
    }

    for(int e : ans) {
        cout << e << "\n";
    }
}