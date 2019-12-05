#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll k, a, b;
    cin >> k >> a >> b;


    if(k <= a){
        cout << k + 1 << endl;
        return 0;
    }else{
        if(b - a > 2){
            ll sum = (k - (a - 1)) / 2 * (b - a) + a;
            if((k - (a - 1)) % 2 == 1){
                sum++;
            }
            cout << sum << endl;
            return 0;
        }else{
            cout << k + 1 << endl;
            return 0;
        }
    }
}
