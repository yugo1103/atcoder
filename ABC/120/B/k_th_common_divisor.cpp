#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b, k;
    cin >> a >> b >> k;

    ll ans = 0;
    ll count = 0;
    for(int i = min(a, b); i >= 0; i--){
        if(a % i == 0 && b % i == 0){
            count++;
            if(count == k){
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
