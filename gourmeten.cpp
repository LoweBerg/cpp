#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int m;
    cin >> m;
    int n;
    cin >> n;

    vector<int> t(n);

    for(int &e : t) {
        cin >> e;
    }
    vector<int> dp(m+1);

    for(int i = 0; i <= m; i++) {
        for(int j = 0; j < t.size(); j++) {
            if(i - t[j] == 0) {
                dp[i]++;
            } else if(i - t[j] > 0) {
                if(dp[i-t[j]] > 0) {
                    dp[i] += dp[i-t[j]];
                }
            }
        }
    }

    cout << dp[m] << endl;


}