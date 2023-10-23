#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;
    int n;
    cin >> n;

    vector<int> t(n);
    vector<int> dp(n + 1);

    int current = m;
    for(int i = dp.size() - 2; i >= 0; i--) {
        current = m - i;

        for(int e : t) {
            if(current + e <= m) {
                
            }
        }
    }


}