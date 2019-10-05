#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    map<ll, ll> f;
    ll s;
    cin >> s;
    f[s]++;

    ll count = 1;
    while(true){
        count++;
        if(s % 2 == 1){
            s = 3 * s + 1;
        }else{
            s = s / 2;
        }
        f[s]++;
        if(f[s] == 2) break;
    }

    cout << count << endl;
    return 0;
}
