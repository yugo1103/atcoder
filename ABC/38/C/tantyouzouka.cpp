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

    ll res = 0;
    ll right = 1;

    for(ll left = 0; left < n; left++){
        while(right < n && (right <= left || a[right - 1] < a[right])){
            right++;
        }
        res += right - left;
        if(left == right) right++;
    }

    cout << res << endl;
    return 0;
}
