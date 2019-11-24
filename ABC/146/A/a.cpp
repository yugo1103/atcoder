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


    if(s == "SUN")cout << 7 << endl;
    else if(s == "MON")cout << 6 << endl;
    else if(s == "TUE")cout << 5 << endl;
    else if(s == "WED")cout << 4 << endl;
    else if(s == "THU")cout << 3 << endl;
    else if(s == "FRI")cout << 2 << endl;
    else if(s == "SAT")cout << 1 << endl;
    return 0;
}
