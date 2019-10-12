#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, t;
    cin >> n >> t;

    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll time = 0;
    ll count = 0;
    rep(i, n){
        if(a[i] < time){
            count += t - (time - a[i]);
        }else{
            count += t;
        }
        time = a[i] + t;
    }

    cout << count << endl;
    return 0;
}
