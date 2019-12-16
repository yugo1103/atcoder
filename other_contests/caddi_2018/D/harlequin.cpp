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

    bool f = false;
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        if(tmp % 2 == 1){
            f = true;
        }
    }
    if(f){
        cout << "first" << endl;
    }else{
        cout << "second" << endl;
    }

    return 0;
}
