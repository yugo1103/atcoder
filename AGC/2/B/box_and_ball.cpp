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

    ll num[n];
    bool check[n];

    rep(i, 0, n){
        num[i] = 1;
        check[i] = false;
    }

    check[0] = true;

    rep(i, 0, m){
        ll t1, t2;
        cin >> t1 >> t2;
        t1--;
        t2--;

        if(check[t1]){
            if(num[t1] == 1){
                check[t1] = false;
                num[t1]--;
                check[t2] = true;
                num[t2]++;
            }else{
                num[t1]--;
                check[t2] = true;
                num[t2]++;
            }
        }else{
            num[t1]--;
            num[t2]++;
        }
    }

    ll count = 0;
    rep(i, 0, n){
        if(check[i]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
