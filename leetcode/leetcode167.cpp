//we can use two-pointer(sorted array only) to solve this question

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int lp = 0, rp = numbers.size() - 1;
    while(lp < rp){
        int sum = numbers[lp] + numbers[rp];
        if(sum == target){
            vector<int> ans = vector<int>(2);
            ans[0] = lp; ans[1] = rp;
            return ans;
        }
        if(sum > target && numbers[lp] > numbers[rp]) lp++;
        if(sum > target && numbers[lp] < numbers[rp]) rp--;
        if(sum < target && numbers[lp] > numbers[rp]) rp--;
        if(sum < target && numbers[lp] < numbers[rp]) lp++;
    }
    return numbers;
}

int main(){
    vector<int> input = vector<int>();
    vector<int> output = vector<int>();
    input.push_back(2);
    input.push_back(7);
    input.push_back(11);
    input.push_back(15);
    int target = 9;
    output = twoSum(input, target);
    for(int i : output){
        printf("%d ", i);
    }
    return 0;
}