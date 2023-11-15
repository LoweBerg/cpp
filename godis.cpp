#include <iostream>
#include <vector>

using namespace std;

struct bag {
    long long v[10];
};

long long comp(bag b, bag key) {
    long long res = 0;
    for(int i = 0; i < 10; i++) {
        res += b.v[i] * key.v[i];
    }
    return res;
}

int main() {
    int x;
    cin >> x;

    vector<bag> c(x, {0}); 

    long long k, s, n;

    for(int i = 0; i < x; i++) {
        cin >> k;
        for(int j = 0; j < k; j++) {
            cin >> s >> n;
            if(s < 0) {
                n*=-1;
                s*=-1;
            }
            c[i].v[s-1] = n;
        }
    }

    long long best = 0;
    long long sum;

    for(int i = 0; i < 1024; i++) {
        bag key;
        sum = 0;
        int a = i;
        for(int j = 0; j < 10; j++) {
            (a % 2 == 1) ? key.v[j] = 1 : key.v[j] = -1;
            a >>= 1;
        }
        for(bag b : c) {
            long long att = comp(b, key);   
            sum += (att > 0) ? att : 0;
        }
        best = max(best, sum);
    }

    cout << best << endl;
}