#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    ll cost[n][3];
    rep(i, 0, n){
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }


    ll sum[n];
    ll ma = 0;
    rep(i, 0, 8){
        rep(j, 0, n){
            sum[j] = 0;
            rep(k, 0, 3){
                if(i & (1 << k)){
                    sum[j] -= cost[j][k];
                }else{
                    sum[j] += cost[j][k];
                }
            }
        }
        sort(sum, sum + n);
        ll sum1 = 0;
        rep(l, 0, m){
            sum1 += sum[n - 1 - l];
        }
        ma = max(ma, sum1);
    }

    cout << ma << endl;
}
