#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll a;
    cin >> a;
    if(a < 1200){
        cout << "ABC" << endl;
    }else if(a < 2800){
        cout << "ARC" << endl;
    }else{
        cout << "AGC" << endl;
    }
    return 0;
}
