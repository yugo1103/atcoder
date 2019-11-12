#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

map<ll, ll> fact;

void factorize(ll n) {
  for (ll i = 2; i*i <= n; ++i) {
    if (n%i) continue;
    while (n%i == 0) {
        n /= i;
        fact[i]++;
    }
  }
  if (n != 1) fact[n]++;
}

int main(void){
    ll n;
    cin >> n;

    rep(i, 1, n+1){
        factorize(i);
    }

    ll c75 = 0;
    ll c25 = 0;
    ll c15 = 0;
    ll c5 = 0;
    ll c3 = 0;
    fore(i, fact){
        if(i.second >= 74){
            c75++;
        }
        if(i.second >= 24){
            c25++;
        }
        if(i.second >= 14){
            c15++;
        }
        if(i.second >= 4){
            c5++;
        }
        if(i.second >= 2){
            c3++;
        }
    }
    ll res = 0;
    if(c5 >= 2 && c3 >= 3){
        res += (c3 - 2) * (c5 * (c5 - 1) / 2);
    }
    if(c25 >= 1 && c3 >= 2){
        res += (c3 - 1) * c25;
    }
    if(c15 >= 1 && c5 >= 2){
        res += (c5 - 1) * c15;
    }
    if(c75 >= 1){
        res += c75;
    }

    cout << res << endl;
    return 0;
}
