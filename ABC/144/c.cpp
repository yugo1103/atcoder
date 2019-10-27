
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;
    ll a, b;

    rep(i, 1, sqrt(n) + 1){
        if(n % i == 0){
            a = i;
            b = n / i;
        }
    }

    cout << a + b -2 << endl;

}
