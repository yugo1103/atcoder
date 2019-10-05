#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    map<ll, ll> number;
    ll n;
    cin >> n;

    rep(i, n){
        ll tmp;
        cin >> tmp;
        number[tmp]++;
    }

    ll count = 0;
    for(auto num: number){
        if(num.second % 2 != 0)
            count++;
    }

    cout << count << endl;
    return 0;
}
