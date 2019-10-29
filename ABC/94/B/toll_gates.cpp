#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)
ll a[10000];

int main(void){
    ll n, m, x;
    cin >> n >> m >> x;

    rep(i, m){
        ll tmp;
        cin >> tmp;
        a[tmp] = 1;
    }

    ll count1 = 0, count2 = 0;
    rep(i, x){
        if(a[i] == 1){
            count1++;
        }
    }
    for(int i = x; i < n; i++){
        if(a[i] == 1){
            count2++;
        }
    }

    cout << min(count1, count2) << endl;
}
