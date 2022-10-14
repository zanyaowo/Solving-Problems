#include <bits/stdc++.h>

using namespace std;

int ct,len = 0;
unordered_map<char, vector<int>> table(100);
unordered_map<char, int> vis = unordered_map<char, int>(100);
vector<int> v1_dt_table = vector<int>(10000);

int split(string str1, string str2){
    int ans = 0;
    string target = "";
    for(int i = 0; i < str1.length(); i++){
        bool include = false;
        char key = str1[i];
        for(int j = 0; j < str2.length() && vis[key] != 1; j++){
               if(str1[i] == str2[j]){
                   table[key].push_back(j);
                   include = 1;
               }
        }
        if(!include){
            str1 = ""; i--;
        }
        vis[key] = 1;
    }

    for(int i = 0; i<str1.length(); i+=2){
        char first = str1[i], sec = str1[i+1];
        int min_va = 10000;
        pair<int, int> loc;
        for(auto i2: table[first]){
             for(auto j : table[sec]){
                 min_va = min((j - i2), min_va);
                 v1_dt_table.push_back(i2);
                 v1_dt_table.push_back(j);
             }
        }
    }
    return ans;
}
// aabbccdd aabbcccddcd
// abcde
int main(){
    string in1, in2;
    cin >> in1 >> in2;
    if(in1.length() > in2.length()){
        string temp = in1;
        in1 = in2;
        in2 = temp;
    }
    cin >> len >> ct;
    int fl = in1.length() - in2.length();
    int ans = 0;
    if( abs(fl) <= (len * ct)){
        ans = split(in1, in2);
    }
    if(ans == 0){
        cout << "impossble";
    }
    return 0;
}


