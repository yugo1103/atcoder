#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    ll ma = 0;
    rep(i, 1, sqrt(m)+1){
        if(!(m % i)){
            if(i >= n){
                ma = max(ma, m / i);
            }
            if(m / i >= n){
                ma = max(ma, i);
            }
        }
    }
    cout << ma << endl;
}
