#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }

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
    ll a, b;
    cin >> a >>b;

    ll g = gcd(a, b);
    auto f = factorize(g);

    cout << f.size() + 1 << endl;
    return 0;
}
