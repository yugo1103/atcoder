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
    ll a_sort[n];
    ll num[n];
    rep(i, 0, n){
        cin >> a[i];
        a_sort[i] = a[i];
        num[i] = 0;
    }

    sort(a_sort, a_sort + n);

    rep(i, 1, n){
        if(a_sort[i - 1] == a_sort[i]){
            num[i] = num[i - 1];
        }else{
            num[i] = num[i - 1] + 1;
        }
    }

    rep(i, 0, n){
        ll ans = upper_bound(a_sort, a_sort + n, a[i]) - a_sort;
        cout << num[ans - 1] << endl;
    }


}
