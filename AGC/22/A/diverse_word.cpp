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


    if(s.size() < 26){
        rep(i, 'a', 'z' + 1){
            ll flag = true;
            rep(j, 0, s.size()){
                if(s[j] == i){
                    flag = false;
                }
            }

            if(flag){
                cout << s << char(i) << endl;
                return 0;
            }
        }
    }else{
        rrep(i, s.size() - 2, 0){
            rep(j, s[i] + 1, 'z' + 1){
                rep(k, i + 1, s.size()){
                    if(j == s[k]){
                        rep(l, 0, i){
                            cout << s[l];
                        }
                        cout << s[k] << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
