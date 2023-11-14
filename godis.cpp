#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>

using namespace std;

unordered_map<int, int> combine(unordered_map<int, int> m1, unordered_map<int, int> m2) {
    for(auto e : m1) {
        if(e.first == 0)
            continue;
        if(m2.find(e.first * -1) != m2.end()) {
            m1[e.first] = abs(m1[e.first] - m2[e.first*-1]);
            m2.erase(e.first*-1);
        }
    }

    m1.insert(m2.begin(), m2.end());

    return m1;
}

int res(unordered_map<int, int> m) {
    int res = 0;

    for(auto e : m) {
        res += e.second;
    }

    return res;
}

int* zip(int n1[], int n2[]) {
    int n3[21] = {0};

    for(int i = 0; i < 10; i++) {
        if(n1[i] > n2[20-i])
            n3[i] = n1[i] - n2[20-i];
        else {
            n3[20-i] = n2[20-i] - n1[i];
        }
    }
}

int main() {
    int x;
    cin >> x;

    vector<int[21]> c(x, {0}); 

    int k, s, n;

    for(int i = 0; i < x; i++) {
        cin >> k;
        while(k--) {
            cin >> s >> n;
            c[i][10+s] = n;
        }
    }

    vector<int> max(x+1);
}