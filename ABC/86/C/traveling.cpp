#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll t[n+1], a[n+1], b[n+1];
    t[0] = 0;
    a[0] = 0;
    b[0] = 0;
    rep(i, n){
        cin >> t[i+1] >> a[i+1] >> b[i+1];
    }

    rep(i, n){
        if(abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]) > t[i+1] - t[i]){
            cout << "No" << endl;
            return 0;
        }
        if((abs(a[i] - a[i+1]) + abs(b[i] - b[i+1])) % 2 != (t[i+1] - t[i]) % 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
