#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ld dp[303][303][303];
ld n;

ld calc(ll i, ll j, ll k){
    if(i == 0 && j == 0 && k == 0){
        return 0.0;
    }
    if(dp[i][j][k] != 0.0){
        return dp[i][j][k];
    }

    dp[i][j][k] = 1.0;

    if(i){
        dp[i][j][k] += calc(i-1, j+1, k) * i / n;
    }
    if(j){
        dp[i][j][k] += calc(i, j-1, k+1) * j / n;
    }
    if(k){
        dp[i][j][k] += calc(i, j, k-1) * k / n;
    }

    dp[i][j][k] *= n / (double)(i + j + k);

    return dp[i][j][k];

}

int main(void){
    cin >> n;

    ll a = 0, b = 0, c = 0;
    rep(i, 0, n){
        ll tmp;
        cin >> tmp;
        if(tmp == 3) a++;
        if(tmp == 2) b++;
        if(tmp == 1) c++;
    }

    printf("%.12Lf\n", calc(a, b, c));
}
