#include<bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;

    double v[N];
    for(int i=0;i<N;i++){cin >> v[i];}

    sort(v, v + N);
    for(int i=0;i<N-1;i++){
        v[i+1] = (v[i] + v[i+1]) / 2.0;
    }

    printf("%lf", v[N-1]);
}
