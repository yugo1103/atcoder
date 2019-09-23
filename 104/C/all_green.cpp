#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)

ll d, g;
ll mi = 100000000000000;
vector<ll> p, c;

void calc(vector<ll> v){
    ll count = 0;
    ll score = 0;
    ll not_use_max = 0;
    rep(i, v.size()){
        if(v[i] == 1){
            score += (i + 1) * 100 * p[i] + c[i];
            count += p[i];
        }else{
            not_use_max = max(not_use_max, i);
        }
    }

    if(score < g){
        if(ceil((g - score) / double((not_use_max + 1) * 100)) < p[not_use_max]){
            count += ceil((g - score) / double((not_use_max + 1) * 100));
        }else{
            return;
        }
    }

    mi = min(mi, count);
}

void dfs(ll dp, vector<ll> v){
    if(dp == d){
        calc(v);
        return;
    }

    v[dp] = 0;
    dfs(dp + 1, v);

    v[dp] = 1;
    dfs(dp + 1, v);

    return;
}

int main(void){
    cin >> d >> g;

    vector<ll> v;
    rep(i, d){
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        p.push_back(tmp1);
        c.push_back(tmp2);
        v.push_back(0);
    }

    dfs(0, v);
    cout << mi << endl;

    return 0;
}
