#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;

    int n;
    cin >> n;

    vector<long long> food(n);

    for(long long &e : food) {
        cin >> e;
    }

    vector<long long> ans(m+1);

    for(long long i = 1; i < ans.size(); i++) {
        for(long long e : food) {
            if(i - e == 0) {
                ans[i]++;
            } else if(i - e > 0) {
                ans[i] += ans[i - e];
            }
        }
    }

    cout << ans.back();
}