#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    ll d[n];
    rep(i, n){
        cin >> d[i];
    }

    ll sum = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            sum += d[i] * d[j];
        }
    }

    cout << sum << endl;
    return 0;
}
