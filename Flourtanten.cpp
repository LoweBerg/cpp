#include <iostream>
#include <vector>

using namespace std;

int bjornSum(vector<int> q, int p);

int main() {
    int places;
    cin >> places;
    places--;
    vector<int> q(places, 0);

    int input = 0;
    for(int i = 0; i < places; i++) {
        cin >> input;
        if(input == 0)
            i--;
        else
            q[i] = input;
    }
    int l = 0;
    int r = q.size();
    int m1;
    int m2;
    int lsum;
    int rsum;

    while(l < r) {
        m1 = l + (r-l)/3;
        m2 = r - (r-l)/3;
        lsum = bjornSum(q, m1);
        rsum = bjornSum(q, m1);
        

        if(lsum == rsum) {
            l = m1;
            r = m2;
        } else if(lsum < rsum) {
            l = m1 + 1;
        } else {
            r = m2 - 1;
        }
    }
    cout << bjornSum(q, l);

    /*
   cout << max(bjornSum(q, 0), bjornSum(q, q.size()));
    */
}

int bjornSum(vector<int> q, int p) {
    q.insert(q.begin() + p, 0);

    int sum = 0;
    for(int i = 0; i < q.size(); i++) {
        sum += (i+1) * q[i];
    }

    return sum;
}