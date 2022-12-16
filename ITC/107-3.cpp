#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> map_owo = unordered_map<int, int>();
int s_Max = 97, s_min = 122, b_Min = 65, b_Max = 90, n_Min = 48, n_Max = 57, kind = 0;
int len = 0, s_len = 0, m_len = 0, n_len = 0, o_len = 0;

void check(string str){
    len = str.length();
    for(auto i: str){
        int code = (int)i;
        if(code >= s_Max && code <= s_min){
            s_len++;
        }else if(code >= b_Min && code <= b_Max){
            m_len++;
        }else if(code >= n_Min && code <= n_Max){
            n_len++;
        }else if(map_owo[code] == 1){
            o_len++;
        }
    }
}

int main(){
    string input = "";
    string str = "!@#$%^&*()-+_=";
    for(auto i: str){
        map_owo[(int)i] = 1;
    }
    cout << "請輸入密碼: \n";
    cin >> input;
    check(input);
    cout << "密碼長度: " << len << endl;
    cout << "小寫英文長度" << s_len << endl;
    if(s_len > 0) kind++;
    cout << "大寫英文長度" << m_len << endl;
    if(m_len > 0) kind++;
    cout << "數字長度" << n_len << endl;
    if(n_len > 0) kind++;
    cout << "符號長度" <<  o_len << endl;
    if(o_len > 0) kind++;
    if(kind >=3 && str.length() >= 8 && str.length() <= 128)cout << "符合密碼規則" << endl;
    else cout << "不符合密碼規則" << endl;
    return 0;
}