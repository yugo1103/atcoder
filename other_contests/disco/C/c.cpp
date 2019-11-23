#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
ll ans[300][300];

int main(void){
    ll h, w, k;
    cin >> h >> w >> k;

    string cake[h];
    rep(i, 0, h){
        cin >> cake[i];
    }

    ll count = 1;
    rep(i, 0, h){
        ll flag = 0;
        rep(j, 0, w){
            if(cake[i][j] == '#'){
                flag = 1;
            }
        }
        if(flag == 0){
            continue;
        }else{
            ll c = 0;
            rep(j, 0, w){
                if(cake[i][j] == '#'){
                    c++;
                }
                if(c <= 1){
                    ans[i][j] = count;
                }else{
                    ans[i][j] = count + c - 1;
                }
            }
            count += c;
        }
    }

    rep(i, 0, h - 1){
        rep(j, 0, w){
            if(ans[i + 1][j] == 0){
                ans[i + 1][j] = ans[i][j];
            }
        }
    }
    rrep(i, h - 1, 1){
        rep(j, 0, w){
            if(ans[i - 1][j] == 0){
                ans[i - 1][j] = ans[i][j];
            }
        }
    }

    rep(i, 0, h){
        rep(j, 0, w){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
