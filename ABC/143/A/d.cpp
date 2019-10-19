#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll l[n];
    rep(i, n){
        cin >> l[i];
    }

    sort(l, l + n);

    ll count = 0;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = n - 1; k > j; k--){
                if(l[i] + l[j] > l[k]){
                    count += k - j;
                    break;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
