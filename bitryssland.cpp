#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> c(n);
    for(auto &e : c) {
        cin >> e;
    }

    vector<int> s(m);
    for(auto &e : s) {
        cin >> e;
    }


    // naïve looping:
    /*
    */
    for(int &e : s) {
        for(int i = c.size()-1; i >= 0; i--) {
            while(e - pow(2, i) >= 0 && c[i] > 0) {
                e -= pow(2, i);
                c[i]--;
            }
        }   
        if(e > 0) {
            cout << "nej";
            return 0;
        }
    }
    cout << "ja";
}