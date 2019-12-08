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

    ll k;
    cin >> k;


    rep(i, 0, s.size() - 1){
        if(s[i] == 'a')continue;
        if(k >= 26 - s[i] + 'a'){
            k -= 26 - s[i] + 'a';
            s[i] = 'a';
        }
    }

    s[s.size() - 1] = (k + s[s.size() - 1] - 'a') % 26 + 'a';
    cout << s << endl;
}
