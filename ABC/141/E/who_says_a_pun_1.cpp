#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()


int main(void){
    ll n;
    string s;
    cin >> n >> s;

    ll ans = 0;
    ll A[n][n];
    rep(x, 0, n){
        A[x][0] = n - x;
        int i = x + 1, j = 0;
        while(i < n){
            while(i + j < n && s[x + j] == s[i + j]) ++j;
            A[x][i] = j;
            ans = max(ans, A[x][i]);
            if(j == 0){
                ++i;
                continue;
            }
            int k = 1;
            while(i + k < n && k + A[x][k] < j){
                A[x][i + k] = A[x][k + x];
                max(ans, A[x][i + k]);
                k++;
            }
            i += k;
            j -= k;
        }
    }
    cout << ans << endl;
    return 0;
}
