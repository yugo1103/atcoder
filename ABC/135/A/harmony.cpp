#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, k;
    cin >> a >> b;

    if(ceil((a + b) / 2.0) != floor((a + b) / 2.0)){
        puts("IMPOSSIBLE");
        return 0;
    }

    cout << (a + b) / 2 << endl;

    return 0;
} 
