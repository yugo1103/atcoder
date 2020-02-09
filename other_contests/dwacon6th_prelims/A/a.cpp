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

    string s[n];
    ll t[n];
    rep(i, 0, n){
        cin >> s[i];
        cin >> t[i];
    }

    string x;
    cin >> x;

    bool flag = 0;
    ll count = 0;
    rep(i, 0, n){
        if(flag){
            count += t[i];
        }
        if(s[i] == x){
            flag = 1;
        }
    }

    cout << count << endl;
    return 0;
}
