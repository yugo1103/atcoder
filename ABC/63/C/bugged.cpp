#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll s[n];
    ll sum = 0;
    rep(i, n){
        cin >> s[i];
        sum += s[i];
    }

    sort(s, s + n);
    if(sum % 10 == 0){
        rep(i, n){
            sum -= s[i];
            if(sum % 10 != 0){
                break;
            }
            sum += s[i];
        }
    }

    if(sum % 10 == 0)
        sum = 0;

    cout << sum << endl;
    return 0;
}
