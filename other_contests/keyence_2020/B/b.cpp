#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    pair<ll, ll> x[n];

    rep(i, 0, n){
        ll t1, t2;
        cin >> t1 >> t2;
        x[i].first = t1 - t2;
        x[i].second = t1 + t2;
    }

    sort(x, x + n);
    ll end = -10000000000;
    ll count = 0;
    rep(i, 0, n){
        if(x[i].first >= end){
            count++;
            end = x[i].second;
        }else{
            end = min(end, x[i].second);
        }
    }

    cout << count << endl;
    return 0;
}
