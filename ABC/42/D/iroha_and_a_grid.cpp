#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
ll t[200001];

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

ll conv(ll x, ll y){
    ll tmp = t[x - y] * t[y];
    return t[x] * modinv(tmp, MOD) % MOD;
}

int main(void){
    ll h, w, a, b;
    cin >> h >> w >> a >> b;

    t[0] = 1;
    rep(i, 1, 200001){
        t[i] = t[i - 1] * i % MOD;
        t[i] %= MOD;
    }

    ll ans = 0;
    rep(i, 0, h - a){
        ans += conv(b - 1 + i, i) * conv((h - 1 - i) + (w - b - 1), w - b - 1) % MOD;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;

}
