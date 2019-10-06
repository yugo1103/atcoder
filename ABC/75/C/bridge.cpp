#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int n;
bool graph[60][60];
bool vis[60];

void dfs(int x){
    if(vis[x]) return;
    vis[x] = true;
    for(int i = 0; i < n; i++){
        if(graph[x][i]){
            dfs(i);
        }
    }
}


int main(void){
    int m;
    cin >> n >> m;
    pair<ll, ll> path[m];
    rep(i, m){
        cin >> path[i].first >> path[i].second;
        path[i].first--;
        path[i].second--;
        graph[path[i].first][path[i].second] = true;
        graph[path[i].second][path[i].first] = true;
    }

    ll count = 0;
    rep(i, m){
        graph[path[i].first][path[i].second] = false;
        graph[path[i].second][path[i].first] = false;
        for(ll i = 0; i < n; i++) vis[i] = false;
        dfs(0);

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                count++;
                break;
            }
        }
        graph[path[i].first][path[i].second] = true;
        graph[path[i].second][path[i].first] = true;
    }

    cout << count << endl;
    return 0;
}
