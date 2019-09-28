#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void){
    double n;
    cin >> n;

    printf("%.8f" , ceil(n / 2.0) / n);
    return 0;
}
