#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll h, w, a, b;
    cin >> h >> w >> a >> b;

    a = min(a, w - a);
    b = max(b, h - b);

    if(a * h > b * w){
        cout << "No" << endl;
        return 0;
    }
    a = max(a, w - a);

    ll m[h][w];
    ll hc[h];
    ll wc[w];

    rep(i, 0 ,h){
        hc[i] = a;
    }
    rep(i, 0 ,w){
        wc[i] = b;
    }
    rep(i, 0, h){
        rep(j, 0, w){
            if(hc[i] && wc[j]){
                m[i][j] = 1;
                hc[i]--;
                wc[j]--;
            }else{
                m[i][j] = 0;
            }
        }
    }

    rep(i, 0, h){
        rep(j, 0, w){
            cout << m[i][j];
        }
        cout << endl;
    }
    return 0;
}
