#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define MAX_V 1005
#define MAX_ID 1005*(1005-1)/2

int game[MAX_V][MAX_V-1];
int id[MAX_V][MAX_V-1];
vector<int> path[MAX_ID];

int to_id(int i, int j){
    if(i > j)
        swap(i, j);
    return id[i][j];
}

bool visited[MAX_ID];
bool calculated[MAX_ID];
int dp[MAX_ID];

int dfs(int id){
    if(visited[id]){
        if(!calculated == true) return -1;
        return dp[id];
    }
    visited[id] = true;
    dp[id] = 1;
    for(int u: path[id]){
        int res = dfs(u);
        if(res == -1) return -1;
        dp[id] = max(dp[id], res+1);
    }
    calculated[id] = true;
    return dp[id];
}


int main(void){
    int n;
    cin >> n;

    rep(i, n)rep(j, n-1){
        cin >> game[i][j];
        game[i][j]--;
    }

    int count = 0;
    rep(i, n)rep(j, n){
        if(i < j){
            id[i][j] = count;
            count++;
        }
    }

    rep(i, n){
        rep(j, n-1)
            game[i][j] = to_id(i, game[i][j]);
        rep(j, n-2){
            path[game[i][j+1]].push_back(game[i][j]);
        }
    }

    int result, ans;
    rep(i, count){
        result = dfs(count);
        if(result == -1){
            puts("-1");
            return 0;
        }
        ans = max(result, ans);
    }

    printf("%d",ans);
}
