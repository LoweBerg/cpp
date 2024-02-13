#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> items{106, 31, 71, 43, 44, 45, 53, 81, 77, 93, 32, 53, 80, 77, 61, 54, 39, 74, 54, 61, 82, 104, 51, 35, 54, 50, 38, 32, 40, 80};
    int target = 1268;
    
    int sum = 0;

    for(int e : items) {
        sum += e;
    }

    vector<int> dp(sum + 1);
    dp[0] = -1;

    for(int i = 0; i < items.size(); i++) {
        for(int j = dp.size(); j >= 0; j--) {
            if(j >= items[i] && abs(dp[j - items[i]]) && !dp[j]) {
                dp[j] = i + 1;
            }
        }
    }

    int i;
    for(i = target; !dp[i]; i++);

    vector<bool> output(items.size());

    while(dp[i] != -1) {
        output[dp[i] - 1] = true;
        i -= items[dp[i] - 1];
    }

    sum = 0;

    cout << "To sell: " << endl;
    for(int i = 0; i < items.size(); i++) {
        if(output[i]) {
            cout << items[i] << endl;
            sum += items[i];
        }
    }

    cout << "Sum: " << sum;
}