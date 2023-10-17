#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;

    cin >> input;

    int pointer = 0;
    int current;

    while (pointer < input.length()) {
        cout << input[pointer];
        pointer += input[pointer] - 64;
    }

    cout << endl;

    return 0;
}