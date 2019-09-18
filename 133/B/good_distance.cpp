#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int n, d;
    cin >> n >> d;
    int x[n][d], ans;
    int count = 0;

    rep(i, n)rep(j, d)
        cin >> x[i][j];

    rep(i, n){
        for(int j = i + 1; j < n; j++){
            ans = 0;

            rep(k, d){
                ans += pow(x[i][k] - x[j][k], 2);
            }
            if(floor(sqrt(ans)) == sqrt(ans))
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
