#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < n; i++)
 
int main(void){
    ll n, k;
    cin >> n >> k;
 
    ll v[n];
    rep(i, n){
        cin >> v[i];
    }
 
    ll ma = -100000000;
    rep(a, n + 1){
        rep(b, n + 1){
            vector<ll> h;
            if(a + b > n || a + b > k) continue;
            rep(i, a){
                h.push_back(v[i]);
            }
            rep(i, b){
                h.push_back(v[n-1-i]);
            }
 
            sort(h.begin(), h.end());
            ll cost = accumulate(h.begin(), h.end(), 0LL);
            rep(i, k - a - b){
                if(i >= h.size()) break;
                if(h[i] != abs(h[i]))
                    cost -= h[i];
            }
            ma = max(ma, cost);
        }
    }
 
    cout << ma << endl;
}
