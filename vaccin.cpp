#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> k(n), p(q);

    for(long long &e : k) {
        cin >> e;
    }

    for(long long &e : p) {
        cin >> e;
    }

    vector<long long> v;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k[i]; j++) {
            v.push_back(i+1);
        }
    }

    for(long long i : p) {
        if(i < v.size()) {
            cout << v[i] << endl;
        } else {
            cout << -1 << endl;
        }
    }
}