#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    double toRadians = acos(-1)/180;
    double toDegrees = 180/acos(-1);
    
    vector<double> t(2);
    int v;

    int cases;
    cin >> cases;

    string halt_move;
    vector<double> halt_pos;    
    
    string input;
    vector<vector<string>> moves;

    vector<double> output;
    
    vector<string> m;
    int movesLen;
    for(int _ = 0; _ < cases; _++) {
        v = 0;
        t[0] = 0;
        t[1] = 0;
        cin >> movesLen;
        
        for(int i = 0; i < movesLen; i++) {
            m.clear();
            cin >> input;
            m.push_back(input);
            cin >> input;
            m.push_back(input);
            if(m[1] == "?") {
                halt_pos = t; 
                halt_move = m[0];
                goto cont;
            }
            if(m[0] == "fd") {
                t[0] += stod(m[1]) * cos(v*toRadians);
                t[1] += stod(m[1]) * sin(v*toRadians);
            }
            else if(m[0] == "bk") {
                t[0] -= stod(m[1]) * cos(v*toRadians);
                t[1] -= stod(m[1]) * sin(v*toRadians);
            } else if(m[0] == "lt") {
                v += stod(m[1]);
            } else {
                v -= stod(m[1]);
            }
            
            cont:;
        }

        if(halt_move == "fd" || halt_move == "bk") {
            output.push_back(sqrt(pow(0 - t[0], 2) + pow(0 - t[1], 2)));
        } else {
            double a = ((t[0]-halt_pos[0])*(0-halt_pos[0]) + (t[1]-halt_pos[1])*(0-halt_pos[1]));
            double b = (sqrt(pow(t[0] - halt_pos[0], 2) + pow(t[1] - halt_pos[1], 2)) * sqrt(pow(0 - halt_pos[0], 2) + pow(0 - halt_pos[1], 2)));
            if(t[0] * t[1] < 0) {
                if(halt_move == "rt")
                    output.push_back(acos(a/b)*toDegrees);
                else
                    output.push_back(360 - acos(a/b)*toDegrees);                   
            } else {
                if(halt_move == "rt")
                    output.push_back(360 - acos(a/b)*toDegrees);
                else
                    output.push_back(acos(a/b)*toDegrees);
            }
        }
    }

    for(double n : output) {
        cout << round(n) << endl;
    }
}