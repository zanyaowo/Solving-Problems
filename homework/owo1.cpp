// p_3_4a, stack for index
#include <bits/stdc++.h>
using namespace std;
#define N 300010
#define oo 10000001 // for index
int main() {
    system("chcp 65001");
    int a[N];
    stack<int> S;
    int i,n;
    long long total=0; // total distance
    scanf("%d",&n);
    S.push(0);
    a[0]=oo;
    for (i=1; i<=n; i++) {
        cin >> a[i];
    }
    cout << "與前面高人的距離\n";
    for (i=1; i<=n; i++) {
        while (a[S.top()] <= a[i]) {
            S.pop();
        }
        cout << "(" << i << ") :" << (i - S.top()) << endl;
        total += i - S.top();
        S.push(i);
    }
    cout << "總距離: " << total;
    return 0;
}
