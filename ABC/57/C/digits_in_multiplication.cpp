#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n;
    cin >> n;

    ll n1 = 0, n2 = 0;
    rrep(i, sqrt(n), 1){
        if(n % i == 0){
            ll tmp = i;
            while(tmp){
                tmp /= 10;
                n1++;
            }
            tmp = n / i;
            while(tmp){
                tmp /= 10;
                n2++;
            }
            break;
        }
    }

    cout << max(n1, n2) << endl;
    return 0;
}
