#include <iostream>
#include <vector>

using namespace std;

int main() {

    int size;

    cout << "array size: ";
    cin >> size;

    vector<int> list;
    list.reserve(size);

    cout << "input element: ";
    for (int i = 0; i < size; i++) {
        cin >> list[i];
    }

    for (int i = 0; i < size; i++) {
        cout << "index: " << i << " | value: " << list[i] << endl;
    }
    
    return 0;
}