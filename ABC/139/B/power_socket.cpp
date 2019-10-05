#include<bits/stdc++.h>
using namespace std;

int main(void){
    int A, B, C = 1, n = 0;
    cin >> A >> B;

    while(C < B){
        C = (C - 1) + A;
        n++;
    }

    printf("%d", n);
}

