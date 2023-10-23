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


int bruteForce(vector<long long> draw, int target) {
    long long result = 0;
    int counter = 0;
    for(int l = 0; l < draw.size(); l++) {
        for (int r = l; r < draw.size(); r++) {
            result = draw.at(r) - draw.at(l);
            if(result == target) {
                counter++;
            } else if(result > target) {
                goto cont;
            }
        }
        return counter;
        cont:;
    }
    
    return counter;
}

int binarySearch(vector<long long> draw, int target) {
    int result = 0;
    int counter = 0;
    for(int i = 0; i < draw.size(); i++) {
        int l = i;
        int r = draw.size() - 1;
        int m;

        while(l < r) {
            m = (r+l)/2;
            result = draw.at(m) - draw.at(i);

            if(result == target) {
                counter++;
                goto cont;  
            } else if(result < target) {
                l = m+1;
            } else {
                r = m-1;
            }
        }
        result = draw.at(l) - draw.at(i);
        if(result == target)
            counter++;
        cont:;
    }

    return counter;
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
    long long result = 0;

// maybe binary search instead of n^2 loop?
    
    // cout << bruteForce(draw, target) << endl;
    cout << binarySearch(draw, target) << endl;
}