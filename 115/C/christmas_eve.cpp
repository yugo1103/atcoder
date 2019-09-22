#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, k;
    cin >> n >> k;

    ll h[n];
    rep(i, n){
        cin >> h[i];
    }

    sort(h, h + n);

    ll diff = 10000000000;
    rep(i, n){
        if(i + k - 1 == n)
            break;
        diff = min(h[i + k - 1] - h[i], diff);
    }

    cout << diff << endl;
    return 0;
}
