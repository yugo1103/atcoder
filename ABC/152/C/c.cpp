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

    ll p[n];
    rep(i, 0, n){
        cin >> p[i];
    }

    ll mi = 100000000;
    ll count = 0;
    rep(i, 0, n){
        if(p[i] <= mi){
            count++;
            mi = p[i];
        }
    }

    cout << count << endl;
    return 0;
}
