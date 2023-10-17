#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> mountainArr = {1,5,3};    
    int target = 3;

    int len = mountainArr.size();
    int l = 0;
    int r = len - 1;
    int mid1;
    int mid2;
    int max;
    int lAns;
    int rAns;

    if(len == 0)
        return -1;
    
    while(l < r) {
        mid1 = l + (r - l)/3;
        mid2 = r - (r - l)/3;

        if(mountainArr[mid1] < mountainArr[mid2]) {
            l = mid1 + 1;
        } else {
            r = mid2 - 1;
        }
    }

    max = l;

    l = 0;
    r = max;

    while(l < r) {
        mid1 = (l + r)/2;
        if(mountainArr[mid1] == target) {
            l = mid1;
            break;
        }
        if(mountainArr[mid1] > target) {
            r = mid1;
        } else {
            l = mid1 + 1;
        }
    }
    lAns = l;

    l = max;
    r = len - 1;

    while(l < r) {
        mid1 = (l+r)/2;
        if(mountainArr[mid1] == target) {
            l = mid1;
            break;
        }
        if(mountainArr[mid1] < target) {
            r = mid1;
        } else {
            l = mid1 + 1;
        }
    }
    rAns = l;

    if(mountainArr[lAns] == target)
        cout << l;
    else if(mountainArr[rAns] == target)
        cout << r;
    else
        cout << -1;
}