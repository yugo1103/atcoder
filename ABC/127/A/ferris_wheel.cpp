#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;

    if(a <= 12){
        b /= 2;
        if(a <= 5){
            b = 0;
        }
    }

    cout << b << endl;
    return 0;
}
