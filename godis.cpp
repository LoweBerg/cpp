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

int main() {
    int x;
    cin >> x;

    vector<unordered_map<int, int>> v(x);

    int k, s, n;

    for(int i = 0; i < x; i++) {
        cin >> k;
        v[i][0] = k;
        while(k--) {
            cin >> s >> n;
            v[i][s] = n;
        }
    }

    vector<int> max(x+1);

}