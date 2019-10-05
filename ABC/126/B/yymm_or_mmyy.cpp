#include<bits/stdc++.h>
using namespace std;
 
int main(void){
    int s, fir, sec;
 
    cin >> s;
    fir = s / 100;
    sec = s - fir * 100;
 
    if(fir > 12 || fir == 0){
        if(sec > 12 || sec == 0)
            puts("NA");
        else
            puts("YYMM");
    }else if(sec > 12 || sec == 0){
        puts("MMYY");
    }else
        puts("AMBIGUOUS");
 
    return 0;
}
