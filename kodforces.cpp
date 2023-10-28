#include <iostream>
#include <vector>

using namespace std;

int findStart(vector<int> c) {
    int s1;
    int s2;
    int i = 0;

    while(c[i] != 1) {
        i++;
        if(i >= c.size())
            i -= c.size();
    }

    s1 = i;
    i++;

    while(c[i] != 1) {
        i++;
        if(i > c.size())
            i -= c.size();
    }

    s2 = i;

    while(c[i] != 2) {
        i++;
        if(i >= c.size())
            i -= c.size();
    }

    int dist1 = 0;
    int dist2 = 0;

    dist1 = (i < s1) ? i - s1 + c.size() : i - s1;
    dist2 = (i < s2) ? i - s2 + c.size() : i - s2;

    return (dist1 < dist2) ? s1 : s2;

    
}

int main() {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> c(n);

    for(int &e : c) {
        cin >> e;
    }

    int i = findStart(c);
    int target = 1;
    int dist = 1;

    while(target <= k) {
        if(c[i] == target)
            target++;
        i++;
        if(i >= c.size())
            i -= c.size();
        dist++;
    }

    cout << dist - 1 << endl;
    
}