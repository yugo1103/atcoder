#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
typedef long long ll;

int main(void){
    ll n, t[5];
    cin >> n;
    rep(i, 5)
        cin >> t[i];

    ll t_num[6] = {n, 0, 0, 0, 0, 0};

    ll count = 0;
    while(t_num[5] != n){
        for(int i = 5; i > 0; i--){
            if(t_num[i-1] >= t[i-1]){
                t_num[i] += t[i-1];
                t_num[i-1] -= t[i-1];
            }else{
                t_num[i] += min(t[i-1], t_num[i-1]);
                t_num[i-1] -= min(t[i-1], t_num[i-1]);
            }
        }
        cout << endl;
        count++;
    }
    cout << count << endl;
    return 0;
}
