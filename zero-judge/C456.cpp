#include <bits/stdc++.h>
#define Max 5005
using namespace std;

// Adjancency_List
int ans;
int vis[Max], p[Max];
vector<int> AL[Max], v[Max];
vector<int> cnt= vector<int>(Max);
queue<int> q;
//number of people

int pa(int x){
    if(p[x]) return x;
    else return p[x] = pa(p[x]);
}

int main(){
    int n, count;
    cin >> n >> count;
    for(int i = 0; i<count; i++){
        int a ,b;
        cin >> a >> b;
        AL[a].push_back(b);
        AL[b].push_back(a);
        cnt[a]++; cnt[b]++;
    }
    for(int i =1; i<=n; i++){
        for(int m = 0; m<=n; m++){
            if(cnt[m] == i){
                q.push(m);
                vis[m] = 1;
            }
        }
        while(!q.empty()){
            int front = q.front();
            q.pop();
            v[i].push_back(front);
            for(auto owo:AL[front]){
                cnt[owo]--;
                if(vis[owo]) continue;
                if(cnt[owo] <= i){
                    q.push(owo);
                    vis[owo] = 1;
                }
            }
        }
    }
    for (int i = n; i >= 1; i--){
        for (auto j:v[i]){
            p[j] = -1;
            for (auto k:AL[j]){
                if (!p[k]) continue;
                int x = pa(j), y = pa(k);
                if (x != y){
                    if (x > y) swap(x, y);
                    p[x] += p[y];
                    p[y] = x;
                }
            }
        }
        for (int j = 1; j <= n; j++){
            if (p[j] < 0) ans = max(ans, -p[j]*i);
        }
    }
    cout << "owo";
    return 0;
}