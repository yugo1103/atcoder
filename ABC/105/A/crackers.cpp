#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a, b;
    cin >> a >> b;
    if(a % b == 0){
        cout << 0 << endl;
    }else{
        cout << 1 << endl;
    }

    return 0;
}
