#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    map<ll, ll> a;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        a[tmp]++;
    }

    ll ans = 1;
    if(n % 2 == 0){
        rep(i, n){
            if(i % 2 == 1){
                if(!a.count(i)){
                    cout << 0 << endl;
                    return 0;
                }else if(a[i] != 2){
                    cout << 0 << endl;
                    return 0;
                }
                ans *= 2;
                ans %= 1000000007;
            }
        }
    }

    if(n % 2 == 1){
        rep(i, n){
            if(i % 2 == 0){
                if(!a.count(i)){
                    cout << 0 << endl;
                    return 0;
                }else if(i == 0 && a[i] != 1){
                    cout << 0 << endl;
                    return 0;
                }else if(i != 0 && a[i] != 2){
                    cout << 0 << endl;
                    return 0;
                }
                ans *= 2;
                ans %= 1000000007;
            }
        }
        ans /= 2;
    }

    cout << ans << endl;
    return 0;
}
