#include <iostream>

using namespace std;

int main() {
    string word;
    cout << "ordet ? ";
    cin >> word;
    int reps;
    cout << "Antal upprepningar ? ";
    cin >> reps;

    for(int i = 0; i < reps; i++) {
        cout << word;
    }
}