#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

#define ll long long

using namespace std;

bool dfs(vector<vector<ll>>* adj, ll current, ll* target) {
    if(current == *(target)) {
        return true;
    }

    for(ll e : adj->at(current)) {
        if(dfs(adj, e, target)) {
            return true;
        }
    }

    return false;
}

int main() {
    ll n;
    cin >> n;

    vector<vector<ll>> m(n);
    ll a, b;
    for(int i = 0; i < n-1; i++) {
        cin >> a >> b;
        m[a-1].push_back(b-1);
    }

    ll q;
    cin >> q;

    ll h, w;
    unordered_map<ll, ll> resident_map;
    vector<ll> residents(q);
    vector<ll> workplaces(q);

    vector<vector<bool>> dp(q, vector<bool>(q));

    for(ll i = 0; i < q; i++) {
        cin >> h >> w;
        residents[i] = h-1;
        workplaces[i] = w-1;
    }

    for(ll i = 0; i < residents.size() ; i++) {
        if(dfs(&m, residents[i], &workplaces[i])) {
            cout << "ja" << "\n";
        } else {
            cout << "nej" << "\n";
        }
    }
}