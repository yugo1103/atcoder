#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, m;
    cin >> n >> m;

    int a[m];
    rep(i, m)
        cin >> a[i];

    ll step[n + 2];
    step[0] = 0;
    step[1] = 1;
    int count = 0;

    for(int i = 2; i <= n + 1; i++){
        if(i - 1 == a[count] && count != m){
            count++;
            step[i] = 0;
        }else{
            step[i] = (step[i - 1] + step[i - 2]) % 1000000007;
        }
    }
    cout << step[n + 1] << endl;
    return 0;
}
