#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
 
int main(void){
    int n;
    cin >> n;
 
    int v[n], c[n], ans = 0;
    rep(i, n){
        cin >> v[i];
    }
    rep(i, n){
        cin >> c[i];
    }
 
    rep(i, n){
        if(v[i] - c[i] > 0)
            ans += v[i] - c[i];
    }
 
    cout << ans << endl;
    return 0;
}
