#include <iostream>
#include <vector>

using namespace std;

long long n, t;

void guess() {
    int nums[n] = {0};
    cout << "? " << 1 << endl << flush;
    int d1[n] = {0};
    for(int &e : d1) {
        cin >> e;
        nums[n-1] += e;
    }

    nums[n-1]++;

    int g = 2;
    int d2[n] = {0};

    cout << "? " << g << endl << flush;

    for(int &e : d2) {
        cin >> e;
    }


    
}

int main() {
    cin >> n >> t;

    if(t == 1) {
        long long d;
        cout << "? " << 1 << endl << flush;
        cin >> d;
        cout << "! " << d+1 << endl;
    } else if(t == 2) {
        vector<long long> d1(2);
        cout << "? " << 1 << endl << flush;
        cin >> d1[0] >> d1[1];
        cout << "? " << d1[0]+1 << endl << flush;
        vector<long long> d2(2);
        cin >> d2[0] >> d2[1];
        if(d2[0] == 0) {
            cout << "! " << d1[0]+1 << " " << d1[0]+1+d1[1] << endl;
        } else {
            cout << "! " << d1[1]+1 << " " << d1[0]+1+d1[1] << endl;
        }
    } else if(t == 3) {
        
    }
}