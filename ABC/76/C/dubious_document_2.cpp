#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string s, t;
    cin >> s >> t;

    string ans = s;
    rep(i, ans.size()){
        if(ans[i] == '?'){
            ans[i] = 'z';
        }
    }
    string ans_tmp = ans;

    rep(i, s.size()){
        bool check = true;
        string tmp = s;
        if(i + t.size() > s.size()){
            check = false;
            break;
        }
        rep(j, t.size()){
            if(t[j] != s[i+j] && s[i+j] != '?'){
                check = false;
                break;
            }
            if(s[i+j] == '?')
                tmp[i+j] = t[j];
        }

        if(check){
            rep(j, s.size()){
                if(tmp[j] == '?')
                    tmp[j] = 'a';
            }
            if(ans >= tmp){
                ans = tmp;
            }
        }
    }


    if(ans == ans_tmp && ans_tmp != s){
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}
