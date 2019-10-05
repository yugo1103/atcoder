#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll l, r;
    ll mi = 2019;

    cin >> l >> r;
    for(ll i = l; i <= r; i++){
        for(ll j = i + 1; j <= r; j++){
            mi = min(mi, (i * j) % 2019);
            if(mi == 0){
                cout << mi << endl;
                return 0;
            }
        }
    }
    cout << mi << endl;
    return 0;

}
