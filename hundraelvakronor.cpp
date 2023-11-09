#include <iostream>

using namespace std;

int main() {
    int price;
    cin >> price;

    int m = 111111111;

    int count = 0;

    while(price > 0) {
        if(price - m >= 0) {
            price -= m;
            count++;
        } else {
        m /= 10;
        }
    }

    cout << count;
}