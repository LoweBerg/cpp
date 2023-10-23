#include <iostream>
#include <vector>

using namespace std;

int powerDraw(int t) {
    int output = 0;
    int h = 0;
    int m = 0;
    int s = t;

    while(s >= 60) {
        m++;
        s -= 60;
    }

    while(m >= 60) {
        h++;
        m -= 60;
    }

    string hString = ((h < 10) ? "0" : "") + to_string(h);

    string tString = ((h<10)?"0":"")+to_string(h)+((m<10)?"0":"")+to_string(m)+((s<10)?"0":"")+to_string(s);
    tString = ((tString.length() < 6) ? "0" : "") + tString;

    int values[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for(char c : tString) {
        output += values[c - '0'];
    }

    return output;
    
}

int main() {
    int endTime = 86400;
    vector<long long> draw;
    draw.reserve(endTime);
    draw.push_back(0);

    for(int i = 1; i <= endTime; i++) {
        draw.push_back(draw[i - 1] + powerDraw(i - 1));
    }

    int target;
    cin >> target;

    long long counter = 0;

    counter = 0;

    cout << draw.back() - draw.front() << endl;

    for(int l = 0; l < draw.size(); l++) {
        for (int r = l; r < draw.size(); r++) {
            if((draw.at(r) - draw.at(l)) == target) {
                counter++;
            } else if((draw.at(r) - draw.at(l)) > target) {
                goto cont;
            }
        }
        cont:;
    }

    cout << counter;
}