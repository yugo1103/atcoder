#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007


//mod inv
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

//素因数分解
vector<pair<ll,int>> factorize(ll n) {
  vector<pair<ll,int>> res;
  for (ll i = 2; i*i <= n; ++i) {
    if (n%i) continue;
    res.emplace_back(i,0);
    while (n%i == 0) {
      n /= i;
      res.back().second++;
    }
  }
  if (n != 1) res.emplace_back(n,1);
  return res;
}

int main(void){
    ll n;
    cin >> n;

    map<ll, ll> x;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
        vector<pair<ll, int>> tmp = factorize(a[i]);
        fore(j, tmp){
            if(x.count(j.first)){
                if(x[j.first] < j.second){
                    x[j.first] = j.second;
                }
            }else{
                x[j.first] = j.second;
            }
        }
    }

    ll lcm = 1;
    fore(i, x){
        rep(j, 0, i.second){
            lcm *= i.first;
            lcm %= MOD;
        }
    }

    ll ans = 0;
    rep(i, 0, n){
        ans += lcm * modinv(a[i], MOD);
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
