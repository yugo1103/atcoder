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

    ll sum = 0;
    if(x == 1 && y == 1) sum = 1000000;
    else{
        if(x == 1){
            sum += 300000;
        }
        if(x == 2){
            sum += 200000;
        }
        if(x == 3){
            sum += 100000;
        }
        if(y == 1){
            sum += 300000;
        }
        if(y == 2){
            sum += 200000;
        }
        if(y == 3){
            sum += 100000;
        }
    }

    cout << sum << endl;


    return 0;
}
