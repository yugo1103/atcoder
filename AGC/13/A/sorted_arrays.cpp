#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    ll flag = 2;

    ll count = 1;
    rep(i, 0, n - 1){
        if(flag == 1 && a[i+1] - a[i] < 0){
            count++;
            flag = 2;
        }else if(flag == 0 && a[i+1] - a[i] > 0){
            count++;
            flag = 2;
        }else if(a[i+1] - a[i] < 0){
            flag = 0;
        }else if(a[i+1] - a[i] > 0){
            flag = 1;
        }
    }
    cout << count << endl;
    return 0;
}
