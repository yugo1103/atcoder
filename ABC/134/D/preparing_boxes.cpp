#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll a[n], b[n];
    rep(i, n){
        cin >> a[i];
        b[i] = 0;
    }

    for(int i=n; i>0; i--){
        ll tmp = i;
        ll count = 0;
        while(n >= tmp){
            count += b[tmp-1];
            tmp += i;
        }
        if(a[i-1] % 2 != count % 2){
            b[i-1]++;
        }
    }

    ll count = 0;
    rep(i, n){
        if(b[i] == 1){
            count++;
        }
    }

    cout << count << endl;

    if(count){
        rep(i, n){
            if(b[i] == 1)
            cout << i+1 << " ";
        }
    }

    cout << endl;
    return 0;
}
