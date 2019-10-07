#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 1; i < n; i++)
map<ll, ll> res;

void factorize(ll n) {
  for (ll i = 2; i*i <= n; ++i) {
    if (n%i) continue;
    while (n%i == 0) {
      n /= i;
      res[i]++;
    }
  }
  if (n != 1)
      res[n]++;
}

int main(void){
    ll N;
    cin >> N;
    rep(i, N + 1){
        factorize(i);
    }

    ll c = 1;
    rep(i, N + 1){
        if(res.count(i)){
            c *= res[i] + 1;
            c %= 1000000007;
        }
    }

    cout << c << endl;
    return 0;
}
