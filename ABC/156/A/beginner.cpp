#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, r;
    cin >> n >> r;

    if(n >= 10){
        cout << r << endl;
    }else{
        cout << r + 100 * (10 - n) << endl;
    }

    return 0;
}
