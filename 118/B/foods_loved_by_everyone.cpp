#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    map<ll, ll>  a;

    ll n, m;
    cin >> n >> m;

    rep(i, m){
        a[i] = 0;
    }

    rep(i, n){
        ll k;
        cin >> k;
        rep(j, k){
            ll tmp;
            cin >> tmp;
            tmp--;
            a[tmp]++;
        }
    }

    ll count = 0;
    rep(i, m){
        if(a[i] == n)
            count++;
    }

    cout << count << endl;
    return 0;
}
