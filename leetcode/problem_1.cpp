#include <bits/stdc++.h>

using namespace std;


vector<int> twoSum(vector<int> arr,int target){
    vector<int> target_arr = vector<int>();
    unordered_map<int, int> map = unordered_map<int, int>();
    for(int i = 0; i< arr.capacity() ; i++){
        int comple = target - arr[i];
        printf("%d ", comple);
        if(map.count(comple)){
            target_arr.push_back(i);
            auto in = map.find(comple)->second;
            target_arr.push_back(in);
            return target_arr;
        }
        map.insert(make_pair(arr[i], i));
    }

    return target_arr;
}

int main() {
    //test
    vector<int> input = vector<int>();
    vector<int> output = vector<int>();
    input.push_back(3);
    input.push_back(2);
    input.push_back(4);
    input.push_back(15);
    int target = 6;
    output = twoSum(input, target);
    for(int i : output){
        printf("%d ", i);
    }
    return 0;
}
