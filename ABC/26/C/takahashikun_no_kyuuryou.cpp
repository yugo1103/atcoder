#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll salary[30];
bool checked[30];
vector<ll> path[30];
ll dfs(ll node){
    ll ma = 0;
    ll mi = 100000000;
    ll salary = 0;

    if(checked[node]){
        return -1;
    }else{
        checked[node] = true;
    }

    fore(i, path[node]){
        ll tmp;
        tmp = dfs(i);
        if(tmp == -1) continue;
        ma = max(ma, tmp);
        mi = min(mi, tmp);
    }

    if(ma == 0){
        salary = 1;
    }else{
        salary = ma + mi + 1;
    }
    return salary;
}
int main(void){
    ll n;
    cin >> n;

    rep(i, 0, n - 1){
        ll tmp;
        cin >> tmp;
        tmp--;
        path[tmp].push_back(i + 1);
        path[i + 1].push_back(tmp);
    }

    cout << dfs(0) << endl;
    return 0;
}
