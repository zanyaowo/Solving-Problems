#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "([<{)]>}";
    string str = "";
    map<char,int> table;
    int t = 0;
    scanf("%d", &t);
    for(int i = 0; i < s.size(); i++){
        table[s[i]] = i;
    }
    while(t--){
        cin >> str;
        stack<int> stk;
        for(int i =0; i<str.size(); i++){
            if(i == 0){
                stk.push(table[str[i]]);
            }else{
                if(!stk.empty() && stk.top() == table[str[i]] -4){
                    stk.pop();
                }else{
                    stk.push(table[str[i]]);
                }
            }
        }
        if(stk.empty()){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
}