#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll c[n], s[n], f[n];
    rep(i, n - 1){
        cin >> c[i] >> s[i] >> f[i];
    }

    rep(i, n - 1){
        ll time = s[i] + c[i];
        for(int j = i + 1; j < n - 1; j++){
            if(time < s[j]){
                time = s[j];
            }

            if(time % f[j] != 0){
                time += f[j] - time % f[j];
            }

            time += c[j];
        }

        cout << time << endl;
    }

    cout << 0 << endl;
    return 0;
}
