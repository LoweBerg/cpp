#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, w, d;
    cin >> n;
    cin >> w;
    cin >> d;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int t : v) {
        if(d > 0 && t <= w) {
            cout << "Asken" << endl;
            d--;
        } else {
            cout << "Papperskorgen" << endl;
        }
    }
}