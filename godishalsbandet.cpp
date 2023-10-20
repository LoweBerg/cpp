#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;

    int p1 = 0;
    int p2 = n.length()/2;
    int s = 0;
    int a = 0;

    for(char c : n.substr(0, n.length()/2)) {
        if(c == 'B') {
            a++;
        }
    }

    for(int i = 0; i < n.length(); i++) {
        if(n.at(p1) == 'B') {
            a--;
        }

        if(n.at(p2) == 'B') {
            a++;
        }

        s = max(s, a);

        p1++;
        if(p1 >= n.length()) 
            p1 -= n.length();
        p2++;
        if(p2 >= n.length()) 
            p2 -= n.length();
    }

    cout << s;
}