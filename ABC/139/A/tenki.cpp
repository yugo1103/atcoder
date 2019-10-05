#include<bits/stdc++.h>
using namespace std;
int main(void){
    char S[3],T[3];
    cin >> S >> T;
    int count;

    for(int i=0;i<3;i++){
        if (S[i] == T[i]){
            count++;
        }
    }

    printf("%d\n",count);
}

