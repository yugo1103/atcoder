#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c){
        if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
            cout << -1 << endl;
        }else{
            cout << 0 << endl;
        }
    }else{
        ll count = 0;
        while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
            count++;
            ll a1, b1, c1;
            a1 = b / 2 + c / 2;
            b1 = a / 2 + c / 2;
            c1 = a / 2 + b / 2;

            a = a1;
            b = b1;
            c = c1;
        }
        cout << count << endl;
    }
    return 0;
}
