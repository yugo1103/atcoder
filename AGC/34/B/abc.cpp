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

    ll count = 0;
    ll count_a = 0;
    ll count_bc = 0;
    bool flag = false;

    rep(i, 0, s.size()){
        if(i + 1 >= s.size()){
            break;
        }

        if(s[i] == 'A' && !flag){
            count_a++;
        }else if(s[i] == 'B' && s[i + 1] == 'C'){
            count_bc++;
            i++;
            flag = true;
        }else{
            count += count_a * count_bc;
            if(s[i] == 'A'){
                count_a++;
            }else{
                count_a = 0;
            }
            count_bc = 0;
            flag = false;
        }
    }

    count += count_a * count_bc;

    cout << count << endl;
    return 0;
}
