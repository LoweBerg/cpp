#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 4};
    vector<int> result = {-1,-1};
    int target = 1;
    int i = 0;
    int j = nums.size() - 1;
    int mid = 0;
    if(nums.size() == 0) {
        for(int e : result)
            cout << e;
        return 0;
    }
    while(i < j) {
        mid = (i+j) / 2;
        if(nums[mid] == target) {
            i = mid;
            j = mid;
            break;
        } else if(nums[mid] < target) {
            i = mid + 1;
        } else {
            j = mid;
        }
    }

    do {
        i--;
        if(i < 0)
            break;
    } while(nums[i] == target);
    i++;

    if(nums[i] == target)
        result[0] = i;
    
    do {
        j++;
        if(j > nums.size() - 1)
            break;
    } while (nums[j] == target);
    j--;

    if(nums[j] == target)
        result[1] = j;

    for(int num : result) {
        cout << num;
    }
}