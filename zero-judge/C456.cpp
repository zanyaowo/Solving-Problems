#include <bits/stdc++.h>
#define Max 5005
#define qu ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// solve with BFS?
// Adjancency_List
int vis[Max], p[Max];
vector<int> AL[Max], v[Max];
vector<int> cnt= vector<int>(Max);
queue<int> q;
//number of people

int main(){
    qu;
    int n, count;
    cin >> n >> count;
    for(int i = 0; i<count; i++){
        int a ,b;
        cin >> a >> b;
        AL[a].push_back(b);
        AL[b].push_back(a);
        cnt[a]++; cnt[b]++;
    }
    for(int i=1; i<=n; i++){
        for(int m=1; m<=n; m++){
            if(cnt[m] == i){
                q.push(m);
                vis[m] = 1;
            }
        }

        while(!q.empty()){
            int now = q.front();
            q.pop();
            v[i].push_back(now);
            for(auto j: AL[now]){
                cnt[j]--;
                if(vis[j]) continue;
                if(cnt[j] <= i){
                    q.push(j);
                    vis[j] = 1;
                }
            }
        }
    }
    for(int i = n; i>0; i--){
        for(auto j: v[i]){
            p[j] = -1;
            for(auto k: AL[j]){

            }
        }
    }
    return 0;
}