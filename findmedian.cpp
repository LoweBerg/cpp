#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> nums1 = {2};
    vector<int> nums2 = {};
    vector<int> combo;

    int len = nums1.size() + nums2.size();
    bool isOdd = false;
    if(len % 2 != 0) { 
        len++;
        len /= 2;
        isOdd = true;
    } else {
        len /= 2;
        len++;
    }
    int p1 = 0;
    int p2 = 0;

    for(int i = 0; i < len; i++) {
        cout << nums1.size();
        cout << nums2.size();
        if(p1 > (int) nums1.size() - 1) {
            combo.push_back(nums2[p2]);
            p2++;
            continue;
        } else if (p2 > (int) nums2.size() - 1) {
            combo.push_back(nums1[p1]);
            p1++;
            continue;
        }
        
        if(nums1[p1] <= nums2[p2]) {
            combo.push_back(nums1[p1]);
            p1++;
        } else {
            combo.push_back(nums2[p2]);
            p2++;
        }
    }

    if (isOdd) {
        cout << combo[len- 1];
    } else {
        cout << (double) (combo[len - 1] + combo[len - 2]) / 2;
    }


}