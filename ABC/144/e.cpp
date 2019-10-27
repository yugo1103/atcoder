#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll f[n];

    priority_queue<pair<ll, ll>> x;
    rep(i, 0, n){
        cin >> a[i] >> f[i];
    }

    sort(a, a + n);
    sort(f, f + n, greater<ll>());
    rep(i, 0, n){
        pair<ll, ll> tmp;
        tmp.first = a[i] * f[i];
        tmp.second = f[i];
        x.push(tmp);
    }

    rep(i, 0, k){
        if(x.top().first == 0){
            break;
        }else{
            pair<ll, ll> tmp;
            tmp = x.top();
            x.pop();
            tmp.first -= tmp.second;
            x.push(tmp);
        }
    }

    cout << x.top().first << endl;
    return 0;
}
