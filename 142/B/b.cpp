#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, k;
    cin >> n >> k;

    ll h[n];
    ll count = 0;
    rep(i, n){
        cin >> h[i];
        if(h[i] >= k)
            count++;
    }

    cout << count << endl;
    return 0;

}
