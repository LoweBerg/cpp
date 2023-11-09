#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<long long>> v(2, vector<long long>(3));

    for(long long &e : v[0]) {
        cin >> e;
    }

    for(long long &e : v[1]) {
        cin >> e;
    }

    

    cont:
    for(int i = 0; i < 2; i++) {
        if (v[i][2] == 0) {
            v[i][1] = 0;
            v[!i][0] = 0;
        }
        

        if(v[i][0] == -1 && v[!i][1] != -1 && v[!i][2] != -1) {
            v[i][0] = v[!i][2] - v[!i][1];
            goto cont;
        }

        if(v[i][1] == -1 && v[i][2] != -1 && v[!i][0] != -1) {
            v[i][1] = v[i][2] - v[!i][0];
            goto cont;
        }

        if(v[i][2] == -1 && v[i][1] != -1 && v[!i][0] != -1) {
            v[i][2] = v[i][1] + v[!i][0];
            goto cont;
        }
    }

    for(int i = 0; i < 2; i++) {
        for(long long l : v[i]) {
            cout << l << " ";
        }
        cout << endl;
    }
}