#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;

    cin >> n >> k;

    ll count = 0;
    while(n > 0){
        n /= k;
        count++;
    }

    cout << count << endl;
    return 0;
}
