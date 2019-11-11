#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    char c[9];
    rep(i, 0, 9){
        cin >> c[i];
    }

    cout << c[0] << c[4] << c[8] << endl;
    return 0;
}
