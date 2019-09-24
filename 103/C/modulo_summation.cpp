#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    ll ans = 0;

    cin >> n;

    rep(i, n){
        ll tmp;
        cin >> tmp;
        ans += tmp - 1;
    }

    cout << ans << endl;
    return 0;
}
