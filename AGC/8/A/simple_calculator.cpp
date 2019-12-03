#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll x, y;
    cin >> x >> y;

    if(signbit(x) != signbit(y)){
        if(y > x){
            cout << min(abs(abs(x) - abs(y)) + 1, y - x) << endl;
        }else{
            cout << abs(abs(x) - abs(y)) + 1 << endl;
        }
    }else{
        if(x > y){
            cout << min(x - y + 2, abs(x + y) + 1) << endl;
        }else{
            cout << y - x << endl;
        }
    }
    return 0;
}
