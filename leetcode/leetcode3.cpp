#define pre  ios::sync_with_stdio(false); cin.tie(NULL);
#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string str) {
    unordered_map<char, int> vis = unordered_map<char, int>();
    int lp=0, rp= 0, len = 0;
    if(str.length() == 0) return len;
    while(rp < str.size()){
        if(vis[str[rp]] == 1){
            len = max(len, rp-lp);
            vis[str[lp]] = 0;
            lp++;
        }else{
            vis[str[rp]] = 1;
            rp++;
        }
    }
    len = max(len, rp-lp);
    return len;
}

int main(){
    string str = "aucp";
    int len = lengthOfLongestSubstring(str);
    cout << len;
    return 0;
}