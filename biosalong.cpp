#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    cin >> input;

    int p1 = 0, p2 = 0;
    int l = input.length();

    while(p1 < input.length()) {
        p2++;
        if(input[p1] == '.') {
            while(p2 < input.length() && input[p2] != '.') {
                p2++;
            }
            if(p2 < input.length())
                l = min(l, p2-p1-1);
        }
        p1 = p2;
    }

    cout << l;
}