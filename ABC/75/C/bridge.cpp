#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

vector<bool> node;
int n, m;

bool dfs(ll dp, vector<vector<ll>> path){
    if(node[dp] == true){
        return false;
    }else{
        node[dp] = true;
    }

    for(ll p: path[dp]){
        dfs(p, path);
    }

    bool check = true;
    rep(i, n){
        if(node[i] == false)
            check = false;
    }

    return check;
}

int main(void){
    vector<vector<ll>> path;
    cin >> n >> m;

    rep(i, n){
        path.push_back({});
        node.push_back(false);
    }

    pair<ll, ll> input[m];
    rep(i, m){
        cin >> input[i].first >> input[i].second;
        input[i].first--;
        input[i].second--;
        path[input[i].first].push_back(input[i].second);
        path[input[i].second].push_back(input[i].first);
    }

    ll count = 0;
    rep(i, m){
        vector<vector<ll>> path_del;
        rep(j, m){
            path_del.push_back({j});
        }
        rep(j, m){
            if(i == j) continue;
            path_del[input[j].first].push_back(input[j].second);
            path_del[input[j].second].push_back(input[j].first);
        }

        rep(j, n){
            node[j] = false;
        }
        if(!dfs(0, path_del))
            count++;
    }

    cout << count << endl;
    return 0;
}
