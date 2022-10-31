#include <bits/stdc++.h>
#define Max 5005
#define qu ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// solve with BFS?
// Adjancency_List
int vis[Max];
vector<int> AL[Max], v[Max];
vector<int> cnt= vector<int>(Max);
queue<int> q;
//number of people

int main(){
    qu;
    freopen("./data/C456-data.txt", "r", stdin);
    freopen("result/C456.txt", "w", stdout);
    int n, count;
    cin >> n >> count;
    for(int i = 0; i<count; i++){
        int a ,b;
        cin >> a >> b;
        AL[a].push_back(b);
        AL[b].push_back(a);
        cnt[a]++; cnt[b]++;
    }
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
    return 0;
}