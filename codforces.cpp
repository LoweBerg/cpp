#include <iostream>
#include <vector>
#include <map>

using namespace std;

int dist(int i, int j, int l) {
    return (j < i) ? j - i + l : j - i;
}

int main() { // solution works with long long. Otherwise integer overflow ruins it
    int n, k;
    cin >> n;
    cin >> k;

    vector<int> c(n);
    for(int &e : c) {
        cin >> e;
    }

    map<int, vector<int>> hm;
    for(int i = 0; i < c.size(); i++) {
        if(hm.find(c[i]) != hm.end()) {
            hm[c[i]].push_back(i);
        }   else {
            hm[c[i]] = {i};
        }
    }

    vector<int> distances;
    long long minDist;
    for(int i = 0; i < c.size(); i++) {
        minDist = INT64_MAX;
        if(c[i] == k)
            distances.push_back(0);
        else {
            for(int j : hm[c[i]+1]) {
                minDist = min(minDist, (long long)dist(i, j, c.size()));
            }
            distances.push_back(minDist);
        }
    }

    minDist = INT64_MAX;
    long long d;
    vector<long long> dp(n+1, INT64_MAX);
    for(int s : hm[1]) {
        d = 0;
        while(c[s] < k) {
            if(dp[s] <= d+1)
                goto cont;
            dp[s] = d+1;
            d += dist(s, s + distances[s], c.size());
            s += distances[s];
            if(s >= c.size())
                s -= c.size();
        }
        dp[s] = min(dp[s], d+1);
        minDist = min(minDist, d+1);
        cont:;
    }

    cout << minDist;
    
}