#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

bool schedule[10];
vector<vector<ll>> f;
vector<vector<ll>> p;
ll ma = -1000000000;

void culc_value(){
    ll count[f.size()];
    rep(i, f.size())
        count[i] = 0;

    bool check = false;
    rep(i, 10){
        if(schedule[i] == true){
            check = true;
            rep(j, f.size()){
                if(f[j][i] == true)
                    count[j]++;
            }
        }
    }
    if(check == false)
        return;

    ll sum = 0;
    rep(i, f.size()){
        sum += p[i][count[i]];
    }
    ma = max(ma, sum);
}

void dfs(ll dp){
    if(dp == 10){
        culc_value();
        return;
    }
    schedule[dp] = false;
    dfs(dp+1);
    schedule[dp] = true;
    dfs(dp+1);
}

int main(void){
    ll n;
    cin >> n;

    rep(i, n){
        ll tmp;
        f.push_back({});
        rep(j, 10){
            cin >> tmp;
            f[i].push_back(tmp);
        }
    }
    rep(i, n){
        ll tmp;
        p.push_back({});
        rep(j, 11){
            cin >> tmp;
            p[i].push_back(tmp);
        }
    }

    dfs(0);
    cout << ma << endl;
    return 0;
}
