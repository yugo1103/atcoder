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

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    ll l = 0, r = 0;
    ll sum = 0;
    ll ans = 0;

    while(r < n){
        if((sum & a[r]) == 0){
            sum += a[r];
            r++;
            ans += r - l;
        }else if(r == l){
            r++;
            l++;
        }else{
            sum -= a[l];
            l++;
        }
    }

    cout << ans << endl;
    return 0;
}
