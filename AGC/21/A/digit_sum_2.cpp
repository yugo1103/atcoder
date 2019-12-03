#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

ll num[18];

int main(void){
    ll n;
    cin >> n;

    ll tmp = n;
    ll i = 0;
    while(tmp){
        num[i] = tmp % 10;
        tmp /= 10;
        i++;
    }

    ll sum = 0;
    rep(j, 0, i - 1){
        if(num[j] != 9){
            sum += 9;
            num[j + 1]--;
        }else{
            sum += num[j];
        }
    }
    sum += num[i - 1];

    cout << sum << endl;
    return 0;
}
