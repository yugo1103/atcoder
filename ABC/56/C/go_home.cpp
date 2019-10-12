#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll x;
    cin >> x;

    ll sum = 0, count = 0;
    while(sum < x){
        count++;
        sum += count;
    }
    cout << count << endl;
    return 0;
}
