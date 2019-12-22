#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

bool check1[100000];
bool check2[100000];

ll dist_t[100000];

ll ans = 0;
vector<ll> node[100000];
void dfs1(ll no, ll dps){
    if(check1[no]){
        return;
    }else{
        check1[no] = true;
        dist_t[no] = dps;

        fore(a, node[no]){
            dfs1(a, dps + 1);
        }
    }
    return;
}

void dfs2(ll no, ll dps){
    if(check2[no]){
        return;
    }else{
        check2[no] = true;
        if(dps >= dist_t[no]){
            return;
        }else{
            ans = max(ans, dist_t[no]);
            fore(a, node[no]){
                dfs2(a, dps + 1);
            }
        }
    }
}

int main(void){
    ll n, u, v;
    cin >> n >> v >> u;
    u--;
    v--;

    rep(i, 0, n - 1){
        ll t1, t2;
        cin >> t1 >> t2;
        t1--;
        t2--;
        node[t1].push_back(t2);
        node[t2].push_back(t1);
    }

    dfs1(u, 0);
    dfs2(v, 0);

    if(ans == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << ans - 1<< endl;
    return 0;
}


