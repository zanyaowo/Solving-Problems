#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1, ans = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(nums[mid] > target){
            left = mid + 1;
        }else if(nums[mid] < target){
            right = mid -1;
        }else if(nums[mid] == target){
            ans = mid;
        }
    }
    return ans;
}
