#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, d, x;
    cin >> n >> d >> x;

    ll a[n];
    rep(i, 0, n){
        cin >> a[i];
    }
    ll sum = 0;
    rep(i, 1, d + 1){
        rep(j, 0, n){
            if((i - 1) % a[j] == 0){
                sum++;
            }
        }
    }

    cout << sum + x << endl;
    return 0;
}
