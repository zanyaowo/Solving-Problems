/*************************
題目:岳不群的併派問題
日期:2022/6/25
班級:資二乙 4號 方柏翰
*************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define N 400
int main() {
    system("chcp 65001");
    int n;
    int cost,totalCost;
    int a[10],c=0,to,d;
    LL m[N];
    LL U[N];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%lld", &m[i]);
    }
    sort(m,m+n);
    cost = m[0]+m[1];
    totalCost = cost;
    for(int i=2; i<n; i++) {
        cost = cost + m[i];
        totalCost = totalCost + cost;
    }
    to=m[c]+m[c+1];
    for (int i=1; i<n; i++) {
        printf("%lld 與 %lld合併成本:%lld\n",m[c],m[c+1],to);
        d=c+1;
        to=to+m[d+1];
        c=c+1;
    }
    printf("總成本%lld\n",totalCost);
    return 0;
}


