#include <bits/stdc++.h>

using namespace std;

int break1 = 0, sum = 0,sum_time = 0;
vector<int> wait = vector<int>();
vector<int> time1 = vector<int>();
void total(int time, int locate){
    cout << "P" << locate << ": " << sum_time << " ";
    for(int i = 0; i < time; i++){
        if(time1[locate] == 0) break;
        time1[locate]--;
        sum_time++;
        break1++;
        for(int j = 0; j < time1.size(); j++){
            if(j !=locate && time1[j]!=0) wait[j]++;
        }
    }
}

int main(){
    bool fl = true;
    int c = 0, time_2;
    cout << "輸入排程數量\n";
    cin >> c;
    time1 = vector<int>(c);
    wait = vector<int>(c);
    cout << "輸入執行時間\n";
    for(int i = 0; i < c; i++){
        cout << "p" << i+1 << ": ";
        cin >> time1[i];
        sum += time1[i];

    }
    cout << "輸入時間配額\n";
    cin >> time_2;
    while(fl){
        for(int i = 0; i < time1.size(); i++){
            total(time_2, i);
        }
        if(break1 == sum) break;
    }
    cout << endl;
    int lo = 1;
    for(auto i : wait){
        cout << "P" << lo <<": "<< i << " ";
        lo++;
    }
    return 0;
}