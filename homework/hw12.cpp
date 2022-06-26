/*************************************
題目:幾場華山論劍
作者資二乙 4號 方柏翰
日期:2022/6/25
*************************************/
#include <bits/stdc++.h>
using namespace std;
#define N 100010
struct ACT {
    int s,f;
};

bool cmp(ACT p, ACT q) {
    return p.f<q.f;
}

int main() {
    int n;
    ACT ac[N];
    scanf("%d",&n);
    for (int i=0; i<n; i++)
        scanf("%d%d",&ac[i].s, &ac[i].f);
    sort(ac, ac+n, cmp);
    int endtime=-1, total=0;
    int ss[N], ff[N];
    for (int i=0; i<n; i++) {
        if (ac[i].s>endtime) {
            total++;
            endtime=ac[i].f;
            ss[i]=ac[i].s;
            ff[i]=ac[i].f;
        }
    }

    cout << endl;
    printf("可參加的場次有:");
    cout << endl;
    for(int i=0; i<n; i++) {
        if(ss[i]!=0||ff[i]!=0) {
            printf("[%d~%d] ", ss[i], ff[i]);
        }
    }
    printf("共 %d 場次\n",total);
    return 0;
}

