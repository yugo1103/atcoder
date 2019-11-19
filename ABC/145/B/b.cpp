#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string a, b, s;
    ll n;
    cin >> n >> s;

    if(n % 2 == 1){
        cout << "No" << endl;
        return 0;
    }

    rep(i, 0, n / 2){
        if(s[i] != s[i + n / 2]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
