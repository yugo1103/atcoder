#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll x, y;
    cin >> x >> y;

    ll ans = x;
    ll count = 1;
    while(ans * 2 <= y){
        ans *= 2;
        count++;
    }

    cout << count << endl;
}
