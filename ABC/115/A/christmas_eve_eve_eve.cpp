#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    ll d;
    cin >> d;

    if(d == 25)
        puts("Christmas\n");
    if(d == 24)
        puts("Christmas Eve\n");
    if(d == 23)
        puts("Christmas Eve Eve\n");
    if(d == 22)
        puts("Christmas Eve Eve Eve\n");

    return 0;
}
