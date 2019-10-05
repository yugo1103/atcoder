#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    ll a[n];
    ll count = 0;
    rep(i, n){
        cin >> a[i];
        while(a[i] % 2 == 0){
            count++;
            a[i] = a[i] / 2;
        }
    }

    cout << count << endl;
    return 0;
}
