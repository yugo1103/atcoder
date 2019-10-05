#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    ll k;

    cin >> s >> k;

    if(s.size() == 1){
        cout << k / 2 << endl;
        return 0;
    }

    ll count = 0;
    ll count_f = 0;
    char f = s[0];

    rep(i, s.size()){
        if(s[i] == f){
            count_f++;
        }else{
            break;
        }
    }
    if(count_f == s.size()){
        if(count_f % 2 == 1){
            cout << (count_f / 2) * k  + k / 2 << endl;
            return 0;
        }
    }
    rep(i, s.size() - 1){
        if(s[i] == s[i+1]){
            count++;
            s[i+1] = '0';
        }
    }

    ll ans = count * k;

    if(s[s.size()-1] != s[s.size()-2] && s[s.size()-1] == s[0]){
        if(count_f % 2 == 1)
            ans += k - 1;
    }

    cout << ans << endl;
    return 0;
}
