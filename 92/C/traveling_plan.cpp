#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int a[n + 1];
    a[n] = 0;

    ll current_pos = 0;
    ll max_cost = 0;
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n + 1){
        max_cost += abs(current_pos - a[i]);
        current_pos = a[i];
    }

    rep(i, n){
        if(signbit(current_pos - a[i]) == signbit(a[i] - a[i+1])){
            cout << max_cost << endl;
        }else{
            cout << max_cost - abs(current_pos - a[i]) - abs(a[i] - a[i+1]) + abs(current_pos - a[i+1]) << endl;
        }
        current_pos = a[i];
    }
    return 0;

}
