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
    string s[n];
    rep(i, 0, n){
        cin >> s[i];
    }

    ll sum = 0;
    ll a = 0, b = 0, c = 0;
    bool flag = true;
    rep(i, 0, n){
        if(s[i][0] == 'B' && s[i][s[i].size()-1] == 'A'){
            a++;
        }else if(s[i][0] == 'B'){
            b++;
        }else if(s[i][s[i].size()-1] == 'A'){
            c++;
        }

        rep(j, 0, s[i].size() - 1){
            if(s[i][j] == 'A' && s[i][j+1] == 'B'){
                sum++;
            }
        }
    }

    if(b + c == 0 && a > 0){
        sum += a - 1;
    }else{
        sum += min(b, c) + a;
    }
    cout << sum << endl;
}
