#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    ll sum[n];
    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    sum[0] = a[0];
    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + a[i];
    }


    ll count = 0;
    ll s = 0, start = 0, end = 0;
    for(;;){
        while(end < n && s < k){
            s += a[end++];
        }
        if(s < k) break;

        count += n - end + 1;

        s -= a[start++];
    }

    cout << count << endl;
    return 0;
}
