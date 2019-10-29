#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, x;
    cin >> n >> x;

    ll m[n];
    ll sum = 0, mi = 1000000;

    rep(i, n){
        cin >> m[i];
        sum += m[i];
        mi = min(mi, m[i]);
    }

    cout << (x - sum) / mi + n << endl;
    return 0;
}
