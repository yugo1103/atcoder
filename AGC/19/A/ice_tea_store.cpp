#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll q, h, s, d;
    ll n;
    cin >> q >> h >> s >> d;
    cin >> n;

    q = q * 8;
    h = h * 4;
    s = s * 2;

    ll sum = n / 2 * min(min(q, h), min(s, d));
    if(n % 2 == 1){
        sum += min(min(s / 2, h / 2), q / 2);
    }

    cout << sum << endl;
    return 0;
}
