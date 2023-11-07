#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    unordered_set<char> consonants = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};

    char current = input[0];

    int count = 0;
    for(int i = 0; i < input.size(); i++) {
        if(consonants.find(input[i]) == consonants.end()) {
            count = 0;
            goto skip;
        }
        if(current != input[i]) {
            current = input[i];
            count = 1;
        } else {
            count++;
        }
        if(count < 3) {
            skip:
            cout << input[i];
        }
    }
}