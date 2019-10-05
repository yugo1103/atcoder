#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, k;

    cin >> n >> k;

    double ans = 0;

    rep(i, n){
        double ans_tmp = 0;
        ans_tmp += 1.0 / (double)n;
        for(int j = i + 1; j < k; j *= 2){
            ans_tmp *= 1.0 / 2.0;
        }
        ans += ans_tmp;
    }

    printf("%.15f", ans);
    return 0;
}
