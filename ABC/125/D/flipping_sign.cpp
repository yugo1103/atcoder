#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    ll count = 0;
    ll sum = 0;
    ll mi = 10000000000;
    rep(i, n){
        cin >> a[i];
        if(a[i] != abs(a[i]))
            count++;

        mi = min(mi, abs(a[i]));
        sum += abs(a[i]);
    }

    if(count % 2 == 0){
        cout << sum << endl;
    }else{
        cout << sum - 2 * mi << endl;
    }
    return 0;
}
