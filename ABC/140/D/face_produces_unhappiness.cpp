#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    ll n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    ll a = 0, b = 0, c = 0;
    rep(i, 0, n-1){
        if(s[i] == s[i+1]){
            a++;
        }else if(s[i] == 'R' && s[i+1] == 'L'){
            b++;
        }else{
            c++;
        }
    }

    if(k <= min(b, c)){
        a += k * 2;
    }else{
        a += min(b, c) * 2;
        if(b != c)
            a += 1;
    }
    cout << a << endl;
    return 0;
}
