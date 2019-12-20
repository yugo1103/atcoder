#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    int N;
    cin >> N;

    ll place[N + 1];
    for (int i = 1; i <= N; ++i) {
        ll a;
        cin >> a;
        place[a] = i;
    }

    ll ans = 0;
    set<ll> used = {0, N + 1};
    for (int i = 1; i <= N; ++i) {
        ll r, l;

        auto itr = used.lower_bound(place[i]);
        r = *itr;
        l = *(--itr);

        ans += i * (place[i] - l) * (r - place[i]);
        used.insert(place[i]);
    }

    cout << ans << endl;
    return 0;
}
