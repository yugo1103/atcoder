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

    ll len = s.length();
    ll curr_num = ll(s[0]) - ll('0');
    ll count = 0;

    rep(i, 0, len - 2){
        if(i % 2 ==0){
            if(s[i + 1] == '+'){
                if(curr_num != 0){
                    count++;
                }
                curr_num = ll(s[i + 2]) - ll('0');
            }else{
                if(curr_num == 0 || ll(s[i + 2]) - ll('0') == 0){
                    curr_num = 0;
                }else{
                    curr_num = 1;
                }
            }
        }
    }

    if(curr_num != 0){
        count++;
    }

    cout << count << endl;
    return 0;
}
