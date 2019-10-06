#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    string a[n];
    rep(i, n){
        cin >> a[i];
    }

    string b[n];
    rep(i, n){
        if(i % 2 == 0){
            b[i/2] = a[n - 1 - i];
        }else{
            b[n - 1 - i / 2] = a[n - 1 - i];
        }
    }

    rep(i, n){
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
