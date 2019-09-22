#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n;
    cin >> n;

    int h[n+1];
    rep(i, n)
        cin >> h[i];
    h[n] = 0;

    int count = 0, mi = 0;
    rep(i, n){
        if(i == 0){
            if(h[i] >= h[i+1]){
                count += h[i];
                mi = h[i];
            }
        }else if(h[i-1] <= h[i] && h[i] >= h[i+1]){
            count += h[i] - mi;
            mi = h[i];
        }else{
            mi = min(mi, h[i]);
        }
    }

    cout << count << endl;
    return 0;
}
