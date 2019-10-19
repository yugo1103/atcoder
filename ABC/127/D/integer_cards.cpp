#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> a;
    rep(i, n){
        ll tmp;
        cin >> tmp;
        a.push(tmp);
    }

    pair<ll, ll> cb[m];
    rep(i, m){
        cin >> cb[i].second >> cb[i].first;
    }

    sort(cb, cb + m, greater<pair<ll, ll>>());
    ll sum = 0;
    rep(i, m){
        rep(j, cb[i].second){
            if(a.top() < cb[i].first){
                a.pop();
                sum += cb[i].first;
                if(a.size() == 0){
                    cout << sum << endl;
                    return 0;
                }
            }else{
                break;
            }
        }
    }

    while(a.size()){
        sum += a.top();
        a.pop();
    }

    cout << sum << endl;
}
