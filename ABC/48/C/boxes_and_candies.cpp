#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, x;
    cin >> n >> x;

    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll count = 0;
    rep(i, n - 1){
        if(a[i] + a[i+1] > x){
            if(a[i] + a[i+1] - x < a[i+1]){
                count += a[i] + a[i+1] - x;
                a[i+1] = x - a[i];
            }else{
                count += a[i+1] + a[i] - x;
                a[i+1] = 0;
                a[i] = x;
            }
        }
    }

    cout << count << endl;
    return 0;
}
