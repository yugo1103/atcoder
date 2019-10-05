#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;
    cin >> n >> m;

    int x[m];
    rep(i, m){
        cin >> x[i];
    }

    sort(x, x + m);

    int diff[m-1];
    rep(i, m - 1){
        diff[i] = x[i + 1] - x[i];
    }

    sort(diff, diff + m - 1);

    int ans = 0;
    rep(i, (m - 1) - (n - 1)){
        ans += diff[i];
    }

    cout << ans << endl;
    return 0;
}
