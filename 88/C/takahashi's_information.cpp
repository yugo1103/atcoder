#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){

    int c[3][3];
    rep(i, 3){
        rep(j, 3){
            cin >> c[i][j];
        }
    }

    int a[3], b[3];
    rep(i, 101){
        a[0] = i;
        b[0] = c[0][0] - a[0];
        b[1] = c[0][1] - a[0];
        b[2] = c[0][2] - a[0];
        a[1] = c[1][0] - b[0];
        a[2] = c[2][0] - b[0];

        bool check = true;
        rep(j, 3){
            rep(k, 3){
                if(c[j][k] != a[j] + b[k]){
                    check = false;
                }
            }
        }

        if(check == true){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
