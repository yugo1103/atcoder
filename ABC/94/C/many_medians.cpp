#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll x[n], y[n];
    rep(i, n){
        cin >> x[i];
        y[i] = x[i];
    }

    sort(x, x + n);

    rep(i, n){
        if(y[i] < x[n / 2]){
            cout << x[n / 2] << endl;
        }else{
            cout << x[n / 2 - 1] << endl;
        }
    }
}
