#include <iostream>

#define ll long long

using namespace std;

int main() {
    string input;
    cin >> input;

    int k = 0;
    int b = 0;

    for(char a : input) {
        if(a == 'k')
            k++;
        else if (a == 'b') {
            b++;
        }
    }

    if(k == 0 && b == 0) {
        cout << "none";
    } else if (k == b) {
        cout << "boki";
    } else if (k > b) {
        cout << "kiki";
    } else {
        cout << "boba";
    }

}