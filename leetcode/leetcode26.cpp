#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int pointer = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != nums[pointer]){
            pointer++;
            nums[pointer] = nums[i];
        }
    }
    return ++pointer;
}