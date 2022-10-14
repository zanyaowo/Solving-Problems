#include <bits/stdc++.h>
#define N 1000015

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int count, input, min_c = 1001, max_c = 0;
    vector<int> map = vector<int>(100);
    cin >> count;
    while(count > 0){
        cin >> input;
        min_c = min(min_c, input);
        max_c = max(max_c, input);
        map[input] = 1;
        count--;
    }
    auto al = [](int item){ return item == 0;};
    bool yon = any_of(map.begin() + min_c, map.begin() + max_c, al);
    if(!yon){
        cout << min_c << " " << max_c << " yes";
    }else if(yon){
        cout << min_c << " "<< max_c << " no";
    }
    return 0;
}