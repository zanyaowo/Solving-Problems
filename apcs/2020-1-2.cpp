#include <bits/stdc++.h>

using namespace std;
//未完

int main(){
    int s, t, n, m,r;
    string str ="";
    string a ;

    scanf("%d %d %d %d %d\n", &s, &t, &n, &m, &r);
    vector<vector<int>> arr1 = vector<vector<int>>(s);
    vector<vector<int>> arr2 = vector<vector<int>>(n);
    for(int i = 0; i <s; i++){
        getline(cin, str);
        stringstream ss(str);
        while(getline(ss, str, ' ')){
            int num = stoi(str);
            arr1[i].push_back(num);
        }
    }
    for(int i = 0; i <n; i++){
        getline(cin, str);
        stringstream ss(str);
        while(getline(ss, str, ' ')){
            int num = stoi(str);
            arr2[i].push_back(num);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int border = i+s;
            int border2 = i+t;
            if(border <= n && border2 <= m){
                for(int k = i; k < ){

                }
            }
        }
    }

    return 0;
}