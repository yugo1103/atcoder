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

    rrep(i, s.size() - 1, 0){
        if(i - 4 >= 0 && s[i-4] == 'd' && s[i-3] == 'r' && s[i-2] == 'e' && s[i-1] == 'a' && s[i] == 'm'){
            i -= 4;
        }else if(i - 6 >= 0 && s[i-6] == 'd' && s[i-5] == 'r' && s[i-4] == 'e' && s[i-3] == 'a' && s[i-2] == 'm' && s[i-1] == 'e' && s[i] == 'r'){
            i -= 6;
        }else if(i - 4 >= 0 && s[i-4] == 'e' && s[i-3] == 'r' && s[i-2] == 'a' && s[i-1] == 's' && s[i] == 'e'){
            i -= 4;
        }else if(i - 5 >= 0 && s[i-5] == 'e' && s[i-4] == 'r' && s[i-3] == 'a' && s[i-2] == 's' && s[i-1] == 'e' && s[i] == 'r'){
            i -= 5;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
