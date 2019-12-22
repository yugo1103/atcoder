#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b;
    cin >> a >> b;

    if(a == 1 && b == 2){
        cout << 3 << endl;
    }else if(a == 1 && b == 3){
        cout << 2 << endl;
    }else if(a == 2 && b == 1){
        cout << 3 << endl;
    }else if(a == 2 && b == 3){
        cout << 1 << endl;
    }else if(a == 3 && b == 1){
        cout << 2 << endl;
    }else if(a == 3 && b == 2){
        cout << 1 << endl;
    }
    return 0;
}
