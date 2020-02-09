#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, d, a;
    cin >> n >> d >> a;

    vector<pair<ll, ll>> m(n);
    rep(i, 0, n){
        cin >> m[i].first >> m[i].second;
        m[i].second = (m[i].second + a - 1) / a;
    }

    sort(all(m));
    ll count = 0;
    ll bomb = 0;
    queue<pair<ll, ll>> event;

    rep(i, 0, n){
        while(!event.empty()){
            if(event.front().first < m[i].first){
                bomb -= event.front().second;
                event.pop();
            }else{
                break;
            }
        }

        if(m[i].second <= bomb) continue;
        ll add = m[i].second - bomb;
        event.push(make_pair(m[i].first + 2 * d, add));
        count += add;
        bomb += add;
    }

    cout << count << endl;
    return 0;
}
