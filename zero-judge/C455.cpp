#include <bits/stdc++.h>
#define Maxn 100005
#define stdio ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

vector<int> Map[Maxn];
int match[Maxn];
bitset<Maxn> vis;


bool find(vector<int> *map, int time){
    for(auto i : map[time]){
        if(!vis[i]){
            vis[i] = 1;
            if(match[i] == 0 || find(map, i)){
                match[i] = time;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int count, p, q, x, ans;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> count;
    for(int i = 0; i<count; i++){
        cin >> p >> q >> x;
        memset(match, 0, sizeof(match));
        for(int i = 0; i < p ; i++){
            Map[i].clear();
        }

        for(int i = 0; i < x; i++){
            int a,b;
            cin >> a >> b;
            Map[a].push_back(b);
        }

        for(int i = 1; i <= p; i++){
            vis.reset();
            if(find(Map, i)){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}