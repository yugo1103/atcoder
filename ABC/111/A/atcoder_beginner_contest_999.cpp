#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    string x;
    cin >> x;

    rep(i, x.size()){
        if(x[i] == '1'){
            cout << "9";
        }else if(x[i] == '9'){
            cout << "1";
        }else{
            cout << "x[i]";
        }
    }

    return 0;
}
