#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll ma = 0;
    map<ll, ll> d;
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        if(i == 0 && tmp != 0){
                cout << 0 << endl;
                return 0;
        }
        if(i != 0 && tmp == 0){
                cout << 0 << endl;
                return 0;
        }
        d[tmp]++;
        ma = max(ma, tmp);
    }

    ll sum = 0;
    rep(i, 0, ma + 1){
        if(i == 0){
            sum = 1;
        }else{
            if(d[i-1] == 0){
                cout << 0 << endl;
                return 0;
            }else{
                rep(j, 0, d[i]){
                    ll tmp = d[i-1] % 998244353;
                    sum *= tmp;
                    sum %= 998244353;
                }
            }
        }
    }

    cout << sum << endl;
    return 0;
}
