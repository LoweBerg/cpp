#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    vector<int> dp(cost.size() + 1, 0);

    int i = 2;
    int c1, c2;

    while(i <= cost.size()) {
        c1 = cost[i - 1] + dp[i - 1];
        c2 = cost[i - 2] + dp[i - 2];
        if(c1 < c2)
            dp[i] = c1;
        else
            dp[i] = c2;
        i++;
    }

    cout << dp.back();





}