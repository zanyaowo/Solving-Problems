/********
標題:十年磨一劍
作者:資二乙 4號 方柏翰
日期:2022/6/25
********************************/
#include <bits/stdc++.h>
using namespace std;
#define N 100010
int main() {
    system("chcp 65001");
    int n, job[N];
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    scanf("%d",&job[i]);

    sort(job, job+n);
    long long int comp=0, total=0;
    for (int i=0; i<n; i++) {
        comp += job[i];
        total += comp;
    }

    sort(job,job+n,greater<int>());
    long long int comp2=0, total2=0;
    for (int i=0; i<n; i++) {
        comp2 += job[i];
        total2 += comp2;
    }
    printf("\n最小完成時間：%lld\n",total);
    printf("\n最長完成時間：%lld\n",total2);
    return 0;
}
