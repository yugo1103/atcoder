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

    if(s == "Sunny"){
        cout << "Cloudy" << endl;
    }else if(s == "Cloudy"){
        cout << "Rainy" << endl;
    }else if(s == "Rainy"){
        cout << "Sunny" << endl;
    }

    return 0;
}

