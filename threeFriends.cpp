#include <iostream>
#include <string>

using namespace std;

int main() {
    string input = "SABABABAB";

    if(input.length() % 2 == 0 || input.length() < 3) {
        cout << "not possible";
        return 0;
    }

    int lwrongs = 0;

    int p1 = 0;
    int p2 = input.length() / 2 + 1;

    // error in left
    while(p2 < input.length() && p1 < input.length()/2 + 1) {
        if(input.at(p1) != input.at(p2)) {
            lwrongs++;
            p1++;
        } else {
            p1++;
            p2++;
        }
    }

    if(p1 != input.length()/2 + 1)
        lwrongs++;

    int rwrongs = 0;

    p1 = 0;
    p2 = input.length() / 2;

    // error in right
    while(p2 < input.length() && p1 < input.length()/2) {
        if(input.at(p1) != input.at(p2)) {
            rwrongs++;
            p2++;
        } else {
            p1++;
            p2++;
        }
    }

    if(p2 != input.length())
        rwrongs++;

    if(lwrongs > 1 && rwrongs > 1) {
        cout << "not possible";
        return 0;
    }

    if(lwrongs == 1 && rwrongs == 1 && input.front() == input.back()) {
        cout << "not unique";
    } else if(rwrongs == 1) {
        cout << input.substr(0, input.length()/2);
    }
    else {
        cout << input.substr(input.length()/2 + 1, input.length());
    }
}