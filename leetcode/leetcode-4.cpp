#include <bits/stdc++.h>

using namespace std;

//merge_sort
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans = 0.0;
    vector<int> target = vector<int>();
    int np1 = 0, np2 = 0;
    while(np1 < nums1.size() && np2 < nums2.size()){
        if(nums1[np1] < nums2[np2]){
            target.push_back(nums1[np1]);
            np1++;
        }else{
            target.push_back(nums2[np2]);
            np2++;
        }
    }
    if(np1 != nums1.size()){
        for(int i = np1; i < nums1.size(); i++){
            target.push_back(nums1[i]);
        }
    }else{
        for(int i = np2; i < nums2.size(); i++){
            target.push_back(nums2[i]);
        }
    }
    int size = target.size();
    if(target.size() == 1) return  target[0];
    if(size % 2 == 0){
        ans = (target[size/2] + target[(size/2)-1]) / 2.0;
    }else{
        ans = target[(size/2)];
    }

    return ans;
}

int main(){
    vector<int> arr1 = vector<int>();
    vector<int> arr2 = vector<int>();
    arr1.push_back(2);
    arr1.push_back(3);
    double ans = findMedianSortedArrays(arr1, arr2);
    cout << ans;
    return 0;
}