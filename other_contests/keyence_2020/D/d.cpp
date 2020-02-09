#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    ll b[n];

    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, n){
        cin >> b[i];
    }

    ll c = 1000000000;
    for(int bit = 0; bit < (1 << n); bit++){
        ll x[n];
        for(int i = 0; i < n; i++){
            if(bit & (1 << i)){
                x[i] = a[i];
            }else{
                x[i] = b[i];
            }
        }
        ll count = 0;
        rep(i, 0, n - 1){
            if(x[i] > x[i + 1]){
                swap(x[i], x[i + 1]);
                count++;
            }
        }
        ll flag1 = true;
        rep(i, 0, n){
            ll flag = false;
            rep(j, 0, n){
                if(abs(i - j) % 2 == 0){
                    if(x[i] == a[j]){
                        flag = true;
                    }
                }else{
                    if(x[i] == b[j]){
                        flag = true;
                    }
                }
            }
            if(flag == false){
                flag1 = false;
            }
        }
        if(flag1){
            c = min(c, count);
        }
    }

    if(c == 1000000000){
        cout << -1 << endl;
    }else{
        cout << c << endl;
    }
    return 0;
}
