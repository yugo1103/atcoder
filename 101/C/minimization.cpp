#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    ll a[n];
    ll p_1;
    rep(i, n){
        cin >> a[i];
        if(a[i] == 1)
            p_1 = i;
    }

    ll count = ceil(double((n - 1) / (k - 1.0)));
    cout << count << endl;
    return 0;
}
