#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n;
    cin >> n;

    if(n % 2 == 0){
        cout << n << endl;
    }
    else{
        cout << n * 2 << endl;
    }

    return 0;
}
