#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
ll c;
ll a1, b1;
ll g;
ll gcd1(ll a, ll b) { return b ? gcd1(b,a%b) : a; }
ll gcd(ll a, ll b) {
    if(b != 0){
        if(b1 % (b/g) == 0 && b1 % (a/g) == 0)
            c++;
        return gcd(b,a%b);
    }else{
        return a;
    }
}

int main(void){
    c = 0;
    cin >> a1 >>b1;
    if(a1 < b1)
        swap(a1, b1);
    g = gcd1(a1, b1);
    gcd(a1,b1);
    cout << c+1 << endl;
    return 0;
}
