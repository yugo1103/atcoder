#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b;
    cin >> a >> b;

    if(a * b % 2 == 1){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
