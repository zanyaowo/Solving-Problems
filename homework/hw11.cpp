/*******************************
題目:笑傲江湖之三戰
作者:資二乙 4號 方柏翰
日期:2022/6/25
*******************************/
#include <bits/stdc++.h>
using namespace std;
#define N 100010
int main() {
    system("chcp 65001");
    int n, enemy[N], ours[N];
    scanf("%d",&n);
    for (int i=0; i<n; i++)
        scanf("%d",&enemy[i]);
    for (int i=0; i<n; i++)
        scanf("%d",&ours[i]);
    sort(enemy, enemy+n);
    sort(ours, ours+n);
    int win=0;
    for (int i=0,j=0; i<n && j<n; i++) {
        if (ours[i]> enemy[j]) {
            cout << "我方戰力：" << ours[i] << " vs " << "敵方戰力：" << enemy[j] <<endl;
            win++;
            j++;
        }
    }
    printf("%d\n",win);
    return 0;
}

