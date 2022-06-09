#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int,int> path;
    int count = 0,start=0, end=0;
    vector<vector<int>> arr(0);
    scanf("%d", &count);
    for(int i=0; i<count;i++){
        scanf("%d %d", &start, &end);
        arr.push_back(vector<int>(start, end));
    }
    std::sort(arr.begin(), arr.end());
    for(auto i:arr){
        printf("start: %d, end: %d \n", i[0], i[1]);
    }
    return 0;
};

int multiply_divide(){

}