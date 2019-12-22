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

    ll count = 0;
    ll i = 5;
    if(n % 2 == 1){
        cout << 0 << endl;
        return 0;
    }
    while(i * 2 <= n){
        count += n / (i * 2);
        i *= 5;
    }

    cout << count << endl;
    return 0;
}
