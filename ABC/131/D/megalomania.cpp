#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    pair<ll, ll> a[n];
    rep(i, n){
        cin >> a[i].second >> a[i].first;
    }

    sort(a, a + n);
    ll sum = 0;
    rep(i, n){
        sum += a[i].second;
        if(sum > a[i].first){
            puts("No\n");
            return 0;
        }
    }

    puts("Yes\n");
    return 0;

}
