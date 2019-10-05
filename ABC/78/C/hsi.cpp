#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll n, m;
    cin >> n >> m;

    ll time = (n - m) * 100 + m * 1900;

    double ans = 0;

    ans = time * pow(2, m);
    cout << ceil(ans) << endl;
    return 0;
}
