#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r;
    cin >> r;
    r--;
    int n;
    cin >> n;

    vector<int> c(n);

    for(int i = 1; i <= c.size(); i++) {
        c[i-1] = i;
    }

    int p = 0;

    while(c.size() > 1) {
        p += r;
        while(p >= c.size())
            p -= c.size();

        c.erase(c.begin() + p);
    }

    cout << c.front() << endl;
}