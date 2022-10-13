#include <bits/stdc++.h>

using namespace std;

int ct,len = 0;
unordered_map<char, vector<int>> table(100);
vector<char> vis = vector<char>(100);
vector<int> v1_dt_table = vector<int>(100000);

int split(string str1, string str2){
    int ans = 0;
    string target = "";
    for(int i = 0; i < str1.length(); i++){
        char key = str1[i];
        for(int j = 0; j < str2.length(); j++){
               auto al = [&key](char ele){ return (key == ele);};
               if(str1[i] == str2[j] && !any_of(vis.begin(), vis.end(), al)){
                   table[key].push_back(j);
               }
        }

        vis.push_back(key);
    }
    return ans;
}
// aabbccdd
// abcd
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


