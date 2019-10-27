#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b, c;
    cin >> a >> b;
    if(a > 9 || b > 9){
        cout << "-1" << endl;
    }else{
        cout << a * b << endl;
    }
    return 0;
}
