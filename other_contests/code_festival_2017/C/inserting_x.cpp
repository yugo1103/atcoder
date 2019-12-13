#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string s;
    cin >> s;

    string a = "";

    rep(i, 0, s.size()){
        if(s[i] != 'x'){
            a += s[i];
        }
    }

    rep(i, 0, a.size()){
        if(a[i] != a[a.size() - 1 - i]){
            cout << -1 << endl;
            return 0;
        }
    }

    ll i = 0;
    ll j = s.size() - 1;
    ll ans = 0;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else if(s[i] == 'x'){
            i++;
            ans++;
        }else{
            j--;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
