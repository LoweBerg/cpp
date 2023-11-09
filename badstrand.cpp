#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    long long b;
    cin >> n >> b;

    vector<long long> a(n);

    for(long long &e : a) {
        cin >> e; 
    }

    vector<long long> p(n+1);

    for(long long i = 1; i < n+1; i++) {
        p[i] = p[i-1] + a[i-1];
    }

    long long l = 0;
    long long p1 = 0;
    long long p2 = 1;

    while(p1 < n) {
        p2 = p1 + l + 1;
        if(p2 >= p.size())
            break;
        if(p[p2] - p[p1] <= b) {
            l = p2-p1;
        } else {
            p1++;
        }
    }

    cout << l;
}