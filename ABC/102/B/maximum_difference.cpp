#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    ll ma = 0;
    ll mi = 10000000000;
    rep(i, n){
        cin >> a[i];
        ma = max(a[i], ma);
        mi = min(a[i], mi);
    }


    cout << ma - mi << endl;
    return 0;
}
