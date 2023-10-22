#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int findDist(vector<vector<string>> moves) {
    double a = 0;
    double x = 0;
    double y = 0;

    for(vector<string> m : moves) {
        if(m[1] == "?")
            continue;
        if(m[0] == "fd") { 
            x += stod(m[1]) * cos(a);
            y += stod(m[1]) * sin(a);
        } else if(m[0] == "bk") {
            x -= stod(m[1]) * cos(a);
            y -= stod(m[1]) * sin(a);
        } else if(m[0] == "lt") {
            a += stod(m[1]) * acos(-1)/180; 
        } else {
            a -= stod(m[1]) * acos(-1)/180; 
        }
    }

    return round(sqrt(pow(0-x,2) + pow(0-y,2)));
}

int findAngle(vector<vector<string>> moves) {
    double min_dist = 1e-9;

    for(int i = 100; i < 360; i++) {
        double a = 0;
        double x = 0;
        double y = 0;
        for(vector<string> m : moves) {
            string m0 = m[0];
            string m1 = m[1];
            m1 = (m1 == "?") ? to_string(i) : m1;

            if(m0 == "fd") {
                x += stod(m1) * cos(a);
                y += stod(m1) * sin(a);
            } else if(m0 == "bk") {
                x -= stod(m1) * cos(a);
                y -= stod(m1) * cos(a);
            } else if(m0 == "lt") {
                a += stod(m1) * acos(-1)/180;
            } else {
                a -= stod(m1) * acos(-1)/180;
            }
        }

        if(sqrt(pow(0-x,2) + pow(0-y,2)) < min_dist)
            return i;
    }
    return 0;
}

int main() {
    
    int cases;
    cin >> cases;
    
    bool findA = false;
    
    vector<string> m;
    int movesLen;
    for(int _ = 0; _ < cases; _++) {
        cin >> movesLen;
        vector<vector<string>> moves(movesLen);
        for(int i = 0; i < movesLen; i++) {
            string m;
            cin >> m;
            moves[i].push_back(m);
            cin >> m;
            moves[i].push_back(m);
            if(moves[i][1] == "?")
                findA = (moves[i][0] == "lt" || moves[i][0] == "rt");
        }
        if(findA)
            cout << findAngle(moves);
        else
            cout << findDist(moves);
        cout << endl;
    }
}