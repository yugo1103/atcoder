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

    ll a[n];
    ll sum = 0;

    rep(i, 0, n){
        cin >> a[i];
        sum += a[i];
    }

    ll count = 0;
    if(sum % n != 0){
        cout << "-1" << endl;
        return 0;
    }else{
        ll ave = sum / n;
        rep(i, 0, n - 1){
            if(a[i] < ave){
                count++;
                a[i + 1] -= ave - a[i];
            }else if(a[i] > ave){
                count++;
                a[i + 1] += a[i] - ave;
            }
        }
    }

    cout << count << endl;
    return 0;
}
