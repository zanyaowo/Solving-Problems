/*************************
題目:全彩彩帶
日期:2022/6/25
班級:資二乙 4號 方柏翰
*************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("chcp 65001");
    int a,b,c;
    cin >>a;
    int A[a],B[a];
    for(b=0; b<a; b++)
        cin >>A[b];
    for(b=0; b<a; b++) {
        for(c=0; c<a; c++)
            if(A[b]==A[c] && b!=c) {
                A[b]=-1;
                break;
            }
        if(A[b]!=-1)
            break;
    }
    for(b=a; b>=0; b--)
        for(c=0; c<a; c++) {
            if(A[b]==A[c] && b!=c)
                A[b]=-1;
        }
    for(b=0; b<a; b++)
        if(A[b]!=-1)
            break;
    for(c=a-1; c>=0; c--)
        if(A[c]==-1)
            break;
    cout <<"\n最短的彩帶長度:"<<c-b;
    cout <<"\n在"<<b+1<<"~"<<c<<"之間";
}

