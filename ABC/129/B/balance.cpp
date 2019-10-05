#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int w[n], sum = 0;
    rep(i, n){
        cin >> w[i];
        sum += w[i];
    }

    int count = 0, ans = 0;
    int mi = 100;
    rep(i, n){
        ans += w[i];
        mi = min(mi, abs(sum - ans - ans));
    }
    cout << mi << endl;
    return 0;
}
