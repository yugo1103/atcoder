#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    ll a[n];
    rep(i, n){
        cin >> a[i];
        a[i] -= i + 1;
    }

    sort(a, a + n);

    ll b;
    if(n % 2 == 1){
        b = a[n / 2];
    }else{
        b = (a[n / 2 - 1] + a[n / 2]) / 2;
    }

    ll ans = 0;
    rep(i, n){
        ans += abs(a[i] - b);
    }

    cout << ans << endl;
    return 0;
}
