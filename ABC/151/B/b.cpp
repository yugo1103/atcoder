#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k, m;
    cin >> n >> k >> m;

    ll a[n-1];
    ll sum = 0;
    rep(i, 0, n - 1){
        cin >> a[i];
        sum += a[i];
    }

    if(sum >= m * n){
        cout << 0 << endl;
    }else{
        if(m * n - sum > k)
            cout << -1 << endl;
        else{
            cout << m * n - sum << endl;
        }
    }
    return 0;
}
