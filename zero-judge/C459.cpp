#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, transform = 0, target = 0;
    int su = 0;
    string num = "";
    cin >> n >> num;
    if(n != 10){
        for(int i = num.length() - 1; i >=0; i--){
            if(su == 0){
                transform += (num[i]- '0');
            }else{
                transform += (num[i]-'0')*pow(n, su);
            }
            su++;
        }
    }else{
        transform = stoi(num);
    }
    su = 1;
    for(int i = 0; i < num.length(); i++){
        target += pow((num[i] - '0'), num.length());
    }
    if(transform == target){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}