#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>

#define uint unsigned int

using namespace std;

struct compare {
    bool operator()(pair<int, int> n1, pair<int, int> n2) {
        if(n1.first == n2.first)
            return n1.second > n2.second;
        return n1.first > n2.first;
    }
};

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;

    int m;
    cin >> m;
    unordered_set<string> proteins;
    unordered_set<int> sizes_set;
    string protein;

    for(int i = 0; i < m; i++) {
        cin >> protein;
        proteins.insert(protein);
        sizes_set.insert(protein.size());
    }

    vector<int> sizes(sizes_set.begin(), sizes_set.end());

    sort(sizes.begin(), sizes.end());

    vector<uint> dp(n+1, INT32_MAX);
    dp[0] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> q;
    q.push({0, t.size()});

    while(!q.empty()) {
        int c = q.top().first;
        q.pop();

        for(int size : sizes) {
            if(size > t.size()-c)
                break;
            if(proteins.find(t.substr(c, size)) != proteins.end()) {
                if(dp[c+size] > dp[c] + 1) {
                    dp[c+size] = dp[c] + 1;
                    q.push({c+size, t.size()-(c+size)});
                }
            }
        }

        if(dp.back() != INT32_MAX)
            break;
    }

    cout << dp.back();
}