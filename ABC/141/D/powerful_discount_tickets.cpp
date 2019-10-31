#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    priority_queue<ll> a;
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        a.push(tmp);
    }

    rep(i, 0, m){
        ll tmp = a.top();
        a.pop();
        a.push(tmp / 2);
    }

    ll sum = 0;
    rep(i, 0, n){
        sum += a.top();
        a.pop();
    }

    cout << sum << endl;
    return 0;

}
