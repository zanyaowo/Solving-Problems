/********************************
題目:一次買賣
作者:資二乙 4號 方柏翰
日期:2022/6/24
********************************/
#include <bits/stdc++.h>
using namespace std;
#define oo 1000001
int main() {
    system("chcp 65001");
    int c=0,b,s;
    int n, max_diff=0;
    int p_min=oo;

    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int p;
        scanf("%d", &p);
        max_diff=max(max_diff, p - p_min);
        if(p - p_min>c) {
            b=p;
            s=p_min;
        }
        c= max_diff;
        p_min = min(p_min, p);
    }

    printf("最大利差：%d , ",max_diff);
    printf("購買價格：%d , 售出價格：%d",s,b);

    return 0;
}
