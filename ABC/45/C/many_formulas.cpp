#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

ll n;
ll sum = 0;
ll s[11];

void dfs(ll dp, bool *flag){
    if(dp == n - 1){
        ll p[11];
        rep(i, n){
            p[i] = s[i];
        }
        rep(i, n - 1){
            if(flag[i] == false){
                sum += p[i];
            }else{
                p[i+1] += 10 * p[i];
            }
        }
        sum += p[n-1];
        return;
    }

    flag[dp] = false;
    dfs(dp + 1, flag);
    flag[dp] = true;
    dfs(dp + 1, flag);
}

int main(void){
    ll tmp;
    cin >> tmp;

    ll i = 0;
    ll p[11];
    while(tmp != 0){
        p[i] = tmp % 10;
        tmp /= 10;
        i++;
    }
    n = i;

    i = 0;
    for(int j = n - 1; j >= 0; j--){
        s[j] = p[i];
        i++;
    }

    bool flag[n];
    dfs(0, flag);

    cout << sum << endl;
    return 0;
}
