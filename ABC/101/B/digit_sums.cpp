#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){

    string s;
    cin >> s;

    char c[s.size()];
    s.copy(c, s.size());

    ll sum = 0;
    ll num = 0;

    rep(i, s.size()){
        sum += c[i] - '0';
        num += pow(10, s.size() - i - 1) * (c[i] - '0');
    }

    if(num % sum == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
