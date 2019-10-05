#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    ll x[n], y[n], h[n];
    rep(i, n)
        cin >> x[i] >> y[i] >> h[i];

    rep(i, 101){
        rep(j, 101){
            bool check = true;
            ll H;
            bool init = false;
            rep(k, n){
                if(init == false && h[k] != 0){
                    H = h[k] + abs(x[k] - i) + abs(y[k] - j);
                    init = true;
                    k = 0;
                }
                if(init == true && h[k] != max(H - abs(x[k] - i) - abs(y[k] - j), ll(0))){
                        check = false;
                        break;
                }
            }
            if(check == true){
                cout << i << " " << j  << " " << H << " " << endl;
                return 0;
            }
        }
    }
}
