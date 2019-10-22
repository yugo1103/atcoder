#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

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
    ll c = 0;

    cin >> n;

    rep(i, n + 1){
        if((i % 2) == 1){
            auto x = factorize(i);
            ll count = 1;
            for(pair<ll, int> j: x){
                count *= j.second + 1;
            }
            if(count == 8){
                c++;
            }
        }
    }

    cout << c << endl;
    return 0;
}
