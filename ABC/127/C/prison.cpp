#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;

    cin >> n >> m;

    int l[m], r[m];
    rep(i, m){
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }

    int l_m = 0, r_m = n - 1;

    rep(i, m){
        l_m = max(l_m, l[i]);
        r_m = min(r_m, r[i]);
    }

    int cnt = 0;
    for(int i = l_m ; i <= r_m;  i++){
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
