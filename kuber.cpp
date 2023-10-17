#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int input;
    double output;

    cin >> input;

    for (int i = 1; i <= input; i++) {
        output += pow(i, 3);
    }

    cout << output << endl;

    return 0;
}