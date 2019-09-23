#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s;
    ll k;
    cin >> s >> k;

    ll ans = 0;
    rep(i, s.size()){
        if(s[i] == '1'){
            ans++;
            if(ans == k){
                cout << 1 << endl;
                return 0;
            }
        }else{
            cout << s[i] << endl;
            return 0;
        }
    }
}
