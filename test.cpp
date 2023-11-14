#include <iostream>

using namespace std;

int* foo(int n[]) {
    n[0] = 1;

    return n;
}

int main() {
    int n[3] = {0, 0, 0};
    for(int e : n) {
        cout << e << " ";
    }
    cout << endl;

    foo(n);

    for(int e : n) {
        cout << e << " ";
    }
}