#include <iostream>
#include <unordered_map>

using namespace std;

long long n, t;

void guess() {
    long long nums[n] = {0};
    long long guess = 1;
    unordered_map<long long, long long> m1, m2;
    cout << "? " << guess << endl;
    long long d1[n] = {0};
    int e;
    for(int i = 0; i < n; i++) {
        cin >> e;
        nums[n-1] += e;
        if(m1.find(e) != m1.end()) {
            m1[e]++;
        } else {
            m1[e] = 1;
        }
    }

    nums[n-1]++;

    for(long long i = 2; i <= n; i++) {
        guess = nums[n-i+1] - 1;
        long long e;

        cout << "? " << guess << endl;

        m2.clear();
        for(int i = 0; i < n; i++) {
            cin >> e;
            if(m2.find(e) != m2.end()) {
                m2[e]++;
            } else {
                m2[e] = 1;
            }
        }

        long long p = 0, n1 = 0, n2 = 1;

        for(auto e : m2) {
            if(m1.find(e.first) == m1.end()) {
                
            }
        }
        

        p++;

        while(p < n) {
            if(m1.find(m2[p]) == m1.end()) {
                n2 = m2[p];
                break;
            }
            p++;
        }

        nums[n-i] = nums[n-i+1] - (n1 + n2);
    }

    cout << "! ";
    for(long long e : nums) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    cin >> n >> t;

    guess();
}