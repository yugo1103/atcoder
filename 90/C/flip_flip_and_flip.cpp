#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)

int main(void){
    ll n, m;
    cin >> n >> m;

    ll count;

    if(n == 1 && m == 1)
        count = 1;
    else if(n == 1){
        count = m - 2;
    }else if(m == 1){
        count = n - 2;
    }else{
        count = (n - 2) * (m - 2);
    }

    cout << count << endl;
    return 0;

}
