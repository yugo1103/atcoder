#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b;
    cin >> a >> b;

    ll c = a - 2 * b;
    if(c > 0){
        cout << c << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
