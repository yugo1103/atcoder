#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)
ll a, b, c, d, e, f;

int main(void){
    cin >> a >> b >> c >> d >> e >> f;
    ll w, s;

    ll w_ans = 0, s_ans = 0;
    double ma = 0;


    rep(i, 31){
        rep(j, 31){
            rep(k, min(f - (i * a + j * b) * 100, (i * a + j * b) * 100)){
                rep(l, min(f - (i * a + j * b) * 100 - k * c, (i * a + j * b) * 100)){
                    w = (i * a + j * b) * 100;
                    s = k * c + l * d;
                    if(w / 100 * e < s || w + s > f || (i == 0 && j == 0)){
                        continue;
                    }
                    if(ma <= (s * 100.0) / double(w + s)){
                        ma = (s * 100.0) / double(w + s);
                        w_ans = w;
                        s_ans = s;
                    }
                }
            }
        }
    }

    cout << w_ans + s_ans << " " << s_ans << endl;
    return 0;
}
