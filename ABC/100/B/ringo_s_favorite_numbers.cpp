#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll d, n;
    cin >> d >> n;

    if(n == 100){
        n++;
    }
    printf("%lld\n", (ll)pow(100, d) * n);
    return 0;
}
