#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k, s;
    cin >> n >> k >> s;

    rep(i, 0, k){
        cout << s;
        cout << " ";
    }
    rep(i, k, n){
        ll tmp = 1000000000;
        if(s == 1000000000){
            tmp = 1;
        }
        cout << tmp;
        cout << " ";
    }
    cout << endl;
    return 0;
}
