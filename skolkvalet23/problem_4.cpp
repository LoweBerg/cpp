#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    string protein;
    cout << "Björns protein ? ";
    cin >> protein;
    int k;
    cout << "k ? ";
    cin >> k;

    queue<tuple<string, int>> q;
    q.push({protein, 0});
    int ans;

    while(!q.empty()) {
        string s = get<0>(q.front());
        int c = get<1>(q.front());
        q.pop();

        char check = s.front();
        bool isPure = true;
        for(int i = 1; i < s.size(); i++) {
            if(s[i] != check) {
                isPure = false;
                break;
            }
        }
        if(isPure) {
            ans = c;
            break;
        }

        int l = (s.size() <= k) ? s.size()-1 : k;
        for(int i = 0; i < s.size(); i++) {
            string copy = s;
            copy.replace(i, l, "");
            q.push({copy, c+1});
        }
    }

    cout << "Svar: " << ans;
}