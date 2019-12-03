#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, a, b;
    cin >> n >> a >> b;

    if(abs(a - b) % 2 == 0){
        cout << "Alice" << endl;
    }else{
        cout << "Borys" << endl;
    }
    return 0;
}
