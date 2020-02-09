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

    map<char, ll> count;
    ll s_len = s.size();

    rep(i, 0, s_len){
        count[s[i]]++;
    }

    ll c = 0;
    fore(i, count){
        if(i.second % 2 == 1){
            c++;
            s_len--;
        }
    }


    ll ans;
    if(s_len == 0){
        ans = 1;
    }else if(c == 0){
        ans = s_len;
    }else{
        ans = s_len / 2 / c * 2 + 1;
    }
    cout << ans << endl;
}
