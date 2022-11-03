#include <bits/stdc++.h>
#define Max 5005
#define qu ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// solve with BFS?
// Adjancency_List
<<<<<<< HEAD
=======
int ans;
>>>>>>> 13c7755b595b58d7ef701bfa9cc93501a711441f
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
<<<<<<< HEAD
    for(int i=1; i<=n; i++){
        for(int m=1; m<=n; m++){
=======
<<<<<<< HEAD
    for(int i =1; i<=n; i++){
        for(int m = 0; m<=n; m++){
>>>>>>> 13c7755b595b58d7ef701bfa9cc93501a711441f
            if(cnt[m] == i){
                q.push(m);
                vis[m] = 1;
            }
        }
<<<<<<< HEAD

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
=======
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
>>>>>>> 13c7755b595b58d7ef701bfa9cc93501a711441f
                }
            }
        }
    }
<<<<<<< HEAD
    for(int i = n; i>0; i--){
        for(auto j: v[i]){
            p[j] = -1;
            for(auto k: AL[j]){

            }
        }
    }
=======
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
=======
//    for(int i =1; i<=n; i++){
//        for(int m = 1; m<=n; i++){
//            if(cnt[m] == i){
//                q.push(m);
//                vis[m] = 1;
//            }
//        }
//        while(!q.empty()){
//            int front = q.front();
//            q.pop();
//            v[i].push_back(front);
//            for(auto owo:AL[front]){
//                cnt[owo]--;
//                if(vis[owo]) continue;
//                if(cnt[owo] <= i){
//                    q.push(owo);
//                    vis[owo] = 1;
//                }
//            }
//        }
//    }
>>>>>>> 46af2d94ba3210caecc2e53e0502e2a95a119310
>>>>>>> 13c7755b595b58d7ef701bfa9cc93501a711441f
    return 0;
}