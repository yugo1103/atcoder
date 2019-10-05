#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;
    int a[n], b[n];
    ll ans = 0;

    rep(i, n + 1){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }

    rep(i, n){
        ans += min(a[i], b[i]) + min(a[i+1], b[i] - min(a[i], b[i]));
        a[i+1] -= min(a[i+1], b[i] - min(a[i], b[i]));
    }
    cout << ans << endl;
    return 0;
}
