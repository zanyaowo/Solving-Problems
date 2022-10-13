#include <bits/stdc++.h>
#define N 100005
using namespace std;

vector<int> Map[N];

//number of people

int main(){
    int nop, count;
    cin >> nop >> count;
    Map->clear();
    while(count >0){
        int re1, re2;
        cin >> re1 >> re2;
        Map[re1].push_back(re2);
        count--;
    }

    return 0;
}