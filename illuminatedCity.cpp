#include <iostream>
#include <vector>
#include <queue>

#define ll long long

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    ll y;
    cin >> y;
    vector<ll> v(n);

    ll l;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for(ll i = 0; i < n; i++) {
        cin >> l;
        q.push(l*x);
    }

    vector<ll> sum(n + 1);

    for(ll i = 1; i < sum.size(); i++) {
        sum[i] = sum[i-1] + q.top();
        q.pop();
    }

    l = 0;
    
    while(l+1 < sum.size() && sum[l+1] <= y*(l+1)) {
        l++;
    }

    cout << l << endl;

    return 0;
}