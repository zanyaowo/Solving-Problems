#include <bits/stdc++.h>

using namespace std;

int main(){
    int size = 0, point =0, len = 0;
    vector<int> arr1(1000000);
    string str = "";
    scanf("%d\n", &size);
    getline(cin, str);
    stringstream ss(str);
    while(getline(ss, str, ' ')){
        int num = stoi(str);
        arr1[point] = num;
        point++;
    }
    for(int i = 0; i < size; i++){
        for(int j = i - 1; j>=0; j--){
            if(arr1[i] < arr1[j]){
                len = len + abs(i-j);
                break;
            }else if(j==0){
                len = len + i+1;
            }
        }
        if(i == 0){
            len = len + i+1;
        }
    }
    printf("%d", len);
    return 0;
}