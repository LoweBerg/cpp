#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, q;

    cin >> n >> q;

    vector<long long> a(n), b(q);

    for(long long &e : a) {
        cin >> e;
    }

    for(long long &e : b) {
        cin >> e;
    }

    sort(a.begin(), a.end());

    for(int i = 1; i < a.size(); i++) {
        a[i] += a[i-1];
    }

    long long c;

    for(long long i : b) {
        cout << a[i-1] << endl;
    }
}