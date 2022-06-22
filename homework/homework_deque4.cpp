// P_3_6, O(n) using stack
#include <bits/stdc++.h>
using namespace std;
#define N 100010
#define oo 1000000000
int main() {
    system("chcp 65001");
    int n,l,i, c[N],h[N];
    int total=0, high=0;
    deque<int> S;
    scanf("%d%d",&n,&l);
    // oo trees at two boundaries
    c[0]=0;
    h[0]=oo;
    c[n+1]=l;
    h[n+1]=oo;
    for (i=1; i<=n; i++)
        scanf("%d", &c[i]);
    for (i=1; i<=n; i++)
        scanf("%d", &h[i]);
    S.push_front(0);
    for (i=1; i<=n; i++) { // scan from left to right
        // if i is removable
        if (c[i]-h[i]>=c[S.front()] || c[i]+h[i]<=c[i+1]) {
            total++;
            high = max(high, h[i]);
            // backward check remaining tree in stack
            while (c[S.front()]+h[S.front()]<=c[i+1]) {
                total++;
                high = max(high, h[S.front()]);
                S.pop_front();
            }
        } else { // i is not removable
            S.push_front(i);
        }
    }
    printf("%d\n%d\n", total,high);
    return 0;
}
