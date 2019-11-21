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

    pair<ll, ll> war[m];
    rep(i, 0, m){
        cin >> war[i].second >> war[i].first;
    }

    sort(war, war + m);

    ll rem = -1;
    ll count = 0;
    rep(i, 0, m){
        if(war[i].second > rem){
            rem = war[i].first - 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
