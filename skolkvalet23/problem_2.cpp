#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n;
    cout << "N ? ";
    cin >> n;

    ll a = 1;

    while(a * (a+1) * (a+2) < n) {
        a++;
    }

    cout << "Svar: " << a-1;
}