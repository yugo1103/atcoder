#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

//２項定理(MOD使用)
const ll MAX = 1000000;
const ll MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(void){

    vector<ll> len;
    pair<ll, ll> pre;
    pre.first = 0;
    pre.second = 0;
    ll x, y;

    cin >> x >> y;

    len.push_back(1);
    COMinit();

    ll a = 0, b = 0;
    ll n = 0;
    rep(i, 0, 1000000){
        a += 2;
        b += 1;
        n++;
        if(a - x == y - b){
            cout << COM(n, a - x) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
