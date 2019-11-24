#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

vector<ll> node[100002];
ll n;
ll check[100002];
ll ma = 0;
vector<ll> c[100002];

int main(void){
    cin >> n;

    ll ta[n], tb[n];
    rep(i, 0, n - 1){
        cin >> ta[i] >> tb[i];
        ta[i]--;
        tb[i]--;
        node[ta[i]].push_back(tb[i]);
        node[tb[i]].push_back(ta[i]);
    }


    rep(i, 0, n){
        ma = max(ll(node[i].size()), ma);
    }
    cout << ma << endl;

    rep(i, 0, n){
        rep(j, 1, ma + 1){
            c[i].push_back(j);
        }
    }

    rep(i, 0, n-1){
        cout << c[ta[i]].back() << endl;
        c[ta[i]].pop_back();
        c[tb[i]].pop_back();

    }

    return 0;
}
