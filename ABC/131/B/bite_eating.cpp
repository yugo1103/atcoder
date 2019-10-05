#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
 
int main(void){
    int n, l;
    cin >> n >> l;
 
    int t[n], ans = 0;
    int min = 100;
 
    rep(i, n){
        t[i] = l + i;
        ans += t[i];
        if(abs(min) > abs(t[i]))
            min = t[i];
    }
 
    ans -= min;
 
    cout << ans << endl;
    return 0;
}
