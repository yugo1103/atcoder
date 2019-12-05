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

    ll sum = 0;
    ll del = 0;
    ll end = 0;
    rep(i, 1, n + 1){
        sum += i;
        if(sum >= n){
            del = sum - n;
            end = i;
            break;
        }
    }

    rep(i, 1, end + 1){
        if(i != del){
            cout << i << endl;
        }
    }

    return 0;
}
