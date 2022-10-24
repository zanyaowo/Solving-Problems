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

// two-pointer with merge_sort

vector<int> merge_sort(vector<int> target){
    if(target.size() > 1){
        int mid = target.size() / 2;
        vector<int> left_arr = vector<int>(target.begin(), target.begin()+mid);
        vector<int> right_arr = vector<int>(target.begin()+mid, target.end());

        left_arr = merge_sort(left_arr);
        right_arr = merge_sort(right_arr);
        int left_index = 0, right_index = 0, merge_index = 0;

        while(left_index < left_arr.size() && right_index < right_arr.size()){
            if(left_arr[left_index] < right_arr[right_index]){
                target[merge_index] = left_arr[left_index];
                merge_index++; left_index++;
            }else{
                target[merge_index] = right_arr[right_index];
                merge_index++; right_index++;
            }
        }

        while(left_index < left_arr.size()){
            target[merge_index] = left_arr[left_index];
            merge_index++; left_index++;
        }
        while(right_index < right_arr.size()){
            target[merge_index] = right_arr[right_index];
            merge_index++; right_index++;
        }
    }
    return target;
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
    vector<int> sorted = merge_sort(input);
//    output = twoSum(input, target);
    for(int i : sorted){
        printf("%d ", i);
    }
    return 0;
}
