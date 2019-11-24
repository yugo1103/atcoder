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
        a[i]--;
    }

    ll count = 0;
    rep(i, 0, n){
        if(a[i] == i){
            if(i == n - 1){
                swap(a[i], a[i - 1]);
                count++;
            }else{
                swap(a[i], a[i + 1]);
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
