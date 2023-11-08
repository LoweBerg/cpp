#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;
    long long sum = 0;
    long long n1 = 0;
    long long n2 = 1;
    long long temp;
    long long i = 0;
    while(sum + n2 <= x * 1000) {
        sum += n2;
        temp = n2;
        n2 += n1;
        n1 = temp;
        i++;
    }

    cout << i;
}