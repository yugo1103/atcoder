#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

int main(void){
    string s;
    cin >> s;

    string curr, prev;
    prev = s[0];
    ll count = 1;
    rep(i, 1, s.size()){
        if(s[i] == prev[0] && prev.size() == 1){
            if(i < s.size() - 1){
                curr = s[i] + s[i + 1];
                i++;
                count++;
            }
        }else{
            curr = s[i];
            count++;
        }
        prev = curr;
    }

    cout << count << endl;
    return 0;
}
