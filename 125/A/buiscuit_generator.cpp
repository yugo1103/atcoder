#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;
    for(int i = 1; i * a <= t; i++){
        ans += b;
    }

    cout << ans << endl;
    return 0;
}
