#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

int annihilate(unordered_map<int, int> m1, unordered_map<int, int> m2) {
    int res = 0;

    for(auto i : m1) {
        if(i.first == 0)
            continue;
        if(m2.find(i.first * -1) != m2.end()) {
            m1[i.first] = abs(m1[i.first] - m2[i.first*-1]);
            m2.erase(i.first*-1);
        }
        res += m1[i.first];
    }

    for(auto i : m2) {
        if(i.first == 0)
            continue;
        res += i.second;
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
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if(i == j) 
                continue;
            cout << annihilate(v[i], v[j]) << endl;
        }
    }
}