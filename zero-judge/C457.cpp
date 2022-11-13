#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> price = vector<int>();
    vector<int> dp0 = vector<int>(10000);
    vector<int> dp1 = vector<int>(10000);
    int time, limit;
    cin >> time >> limit;
    for(int i = 0; i<time; i++){
        int price1;
        cin >> price1;
        price.push_back(price1);
    }
    bool handle = false;
    dp0[0] = 0; dp1[0] = -price[0];
    int i = 1, k =0;
    //100 90 185 120 80 150 140 180 110 150 50
    while(i <= time) {
        dp0[i] = max(dp0[i - 1], dp1[i - 1] + price[i]);
        dp1[i] = max(dp1[i - 1], dp0[i - 1] - price[i]);
        if(dp0[i] > dp0[i-1]) k++;
        i++;
    }
    cout << dp0[i-2];
    return 0;
}