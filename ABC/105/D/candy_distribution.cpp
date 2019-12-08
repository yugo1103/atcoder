#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    ll a[n];
    ll sum[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    ll ans = 0;
    map<ll, ll> num;
    sum[0] = a[0] % m;
    num[sum[0]]++;
    if(sum[0] == 0){
        ans += num[sum[0]];
    }
    rep(i, 0, n - 1){
        sum[i + 1] = (sum[i] + a[i + 1]) % m;
        num[sum[i + 1]]++;
        if(sum[i + 1] == 0){
            ans += num[sum[i + 1]];
        }else{
            ans += num[sum[i + 1]] - 1;
        }
    }

    cout << ans << endl;


}
