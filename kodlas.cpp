#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    int M;
    cin >> M;

    vector<int> lock;
    string segment;
    int openings;

    for(int i = 0; i < N; i++) {
        openings = 0;
        cin >> segment;
        for(int j = 0; j < segment.size(); j++) {
            if(segment[j] == '.')
                openings++;
        }
        lock.push_back(openings);        
    }

    int openSum = lock.front();
    for(int i = 1; i < lock.size(); i++) {
        openSum *= lock[i];
    }

    openSum *= M;

    if(openSum > pow(M, N))
        cout << pow(M, N);
    else
        cout << openSum;
}