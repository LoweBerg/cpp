#include <iostream>
#define ll long long

using namespace std;


int main() {
    ll n, t;
    cin >> n >> t;
    ll nums[n] = {0};
    ll guess = 1;
    cout << "? " << guess << endl;
    ll d1[n] = {0};
    for(ll &e : d1) {
        cin >> e;
        nums[n-1] += e;
    }
    nums[n-1]++;
    guess = nums[n-1];
    nums[0] = nums[n-1];

    if(t == 1) {
        cout << "! " << nums[0] << endl;
        return 0;
    }

    cout << "? " << guess << endl;

    for(ll &e : d1) {
        cin >> e;
        nums[0] -= e;
    }

    for(ll i = n-1; i > 1; i--) {
        guess = nums[i] - 1;
        ll d2[n] = {0};

        cout << "? " << guess << endl;

        for(ll &e : d2) {
            cin >> e;
        }

        ll p = n, diff = 0;

        while(p--) {
            if(d1[p] != d2[p]) {
                diff = d2[p];
                break;
            }
        }

        nums[i-1] = guess - diff;
    }

    cout << "! ";
    for(ll e : nums) {
        cout << e << " ";
    }
    cout << endl;
}