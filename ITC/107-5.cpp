#include <bits/stdc++.h>

using namespace std;

int Right = 0, Left= 0;
bool first = true;
vector<int> locate = vector<int>();

int max_num(vector<int> arr, int n){
    int max_num = 0, sum = 0, fl1=0, ending= 0, less = -10000;
    bool fl = false;
    if(arr.size() == 1) {
        Right = 1;
        Left = 1;
        return max_num = arr[0];
    }
    for(int i = 0; i <n; i++) {
        less = (arr[i] < 0)?max(less, arr[i]): less;
        sum += arr[i];
        if(sum >= 0){
            fl = 1;
            ending++;
        }else{
            Left = i +1;
        }
        sum = max(sum, 0);
        if(sum > max_num){
            Right = i;
        }
        max_num = max(max_num, sum);
    }
    if(max_num == 0 && fl == 1) max_num = less;
    return max_num;
}

int main(){
    vector<int> arr = vector<int>{-1};
    int ans = max_num(arr, arr.size());
    cout << ans << endl;

    cout << Left << " " << Right;
    return 0;
}