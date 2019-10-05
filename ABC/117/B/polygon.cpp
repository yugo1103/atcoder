#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll sum = 0;
    ll ma = 0;
    ll n;
    cin >> n;

    rep(i, n){
        ll tmp;
        cin >> tmp;
        sum += tmp;
        ma = max(tmp, ma);
    }

    if(ma < sum - ma){
        puts("Yes\n");
    }else{
        puts("No\n");
    }
    return 0;
}
