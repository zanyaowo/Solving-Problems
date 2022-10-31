#include <bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    //     7
    //    [2,3,1,2,4,3]
    int sum = 0;
    int left_border = 0, right_border = 0;
    int minLength = 10000000000;
    while(right_border <= nums.size()){
        while(sum < target && right_border <= nums.size()){
            sum += nums[right_border];
            right_border++;
        }

        if(sum >= target){
            minLength = min(minLength, right_border-left_border);
            sum -= nums[left_border];
            left_border++;
        }
    }
    if(minLength == 10000000000) return 0;
    return minLength;
}

int main(){
    string str = "[[2,3,1,2,4,3]";
    str.erase(remove(str.begin(), str.end(), '['), str.end());
    cout << str;

    return 0;
}