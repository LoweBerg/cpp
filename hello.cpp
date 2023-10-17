#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World" << endl;
    int arr [4] = { 1, 2, 3, 4 };

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "index: " << i << " | num: " << arr[i]<< endl;
    }
    return 0;
}