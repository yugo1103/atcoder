#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    string s;

    cin >> n >> s;

    ll ma = 0;
    rep(i, 0, n){
        ll count = 0;
        map<ll, ll> m;
        rep(j, 0, i){
            if(!m.count(s[j])){
                m[s[j]]++;
                rep(k, i, n){
                    if(s[j] == s[k]){
                        count++;
                        break;
                    }
                }
            }
        }
        ma = max(ma, count);
    }

    cout << ma << endl;
}
