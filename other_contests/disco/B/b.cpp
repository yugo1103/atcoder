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
    ll sum = 0;
    rep(i, 0, n){
        cin >> a[i];
        sum += a[i];
    }
    if(n == 2){
        cout << abs(a[0] - a[1]) << endl;
        return 0;
    }

    ll d = 0;
    ll b = 0;
    ll c = 0;
    ll flag = 0;
    rep(i, 0, n){
        if(b + a[i] < (double(sum) / 2.0) && flag == 0){
            b += a[i];
        }else if(flag == 0){
            c = a[i];
            flag = 1;
        }else{
            d += a[i];
        }
    }

    if(b == 0){
        cout << abs(c - d) << endl;
        return 0;
    }else if(d == 0){
        cout << abs(b - c) << endl;
        return 0;
    }

    ll cost = 0;
    if(b + c == d || b == c + d){
        cout << cost << endl;
    }else{
        cout << min(b + c - d, d + c - b) << endl;
    }
    return 0;
}
