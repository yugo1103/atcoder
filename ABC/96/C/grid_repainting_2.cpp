#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    int h, w;
    cin >> h >> w;

    char s[h+2][w+2];
    rep(i, h + 2){
        rep(j, w + 2){
            if(i == 0 || j == 0 || i == h + 1 || j == w + 1)
                s[i][j] = '.';
            else
                cin >> s[i][j];
        }
    }

    for(int i = 1; i < h + 1; i++){
        for(int j = 1; j < w + 1; j++){
            bool check = false;
            if(s[i][j] == '#'){
                s[i][j] = '+';
                if(s[i+1][j] != '.'){
                    s[i+1][j] = '+';
                    check = true;
                }
                if(s[i-1][j] != '.'){
                    s[i-1][j] = '+';
                    check = true;
                }
                if(s[i][j+1] != '.'){
                    s[i][j+1] = '+';
                    check = true;
                }
                if(s[i][j-1] != '.'){
                    s[i][j-1] = '+';
                    check = true;
                }

                if(check == false){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}
