#include<bits/stdc++.h>
using namespace std;

int main(void){
    long int x, i, max = 0, count = 0;

    cin >> x;
    long int h[x];

    for(i = 0; i < x ; i++)
        cin >> h[i];

    for(i = 0; i < x-1; i++){
        if(h[i] >= h[i+1]){
            count++;
        }else{
            count = 0;
        }

        if(count > max)
            max = count;
    }

    printf("%ld", max);
}
