#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m, c;

    cin >> n >> m >> c;

    ll a[n][m], b[m];
    rep(i, m){
        cin >> b[i];
    }
    rep(i, n){
        rep(j, m){
            cin >> a[i][j];
        }
    }

    ll count = 0;
    rep(i, n){
        ll ans = 0;
        rep(j, m){
            ans += a[i][j] * b[j];
        }
        ans += c;
        if(ans > 0){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
