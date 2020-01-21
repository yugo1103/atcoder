#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, m;
    cin >> n >> m;

    char a[n][n];
    char b[m][m];

    rep(i, 0, n){
        rep(j, 0, n){
            cin >> a[i][j];
        }
    }

    rep(i, 0, m){
        rep(j, 0, m){
            cin >> b[i][j];
        }
    }

    rep(i, 0, n){
        rep(j, 0, n){
            bool check = true;
            rep(k, 0, m){
                rep(l, 0, m){
                    if(i + k >= n){
                        check = false;
                        break;
                    }else if(j + l >= n){
                        check = false;
                        break;
                    }
                    if(b[k][l] != a[i + k][j + l]){
                        check = false;
                        break;
                    }
                }
                if(!check) break;
            }
            if(check){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
