#include <stdio.h>

int main(){
    int N,sum=0,aux=0;

    scanf("%d",&N);
    while(1){
        if(N < 0) break;
        sum += N;
        aux++;
        scanf("%d",&N);
    }
    printf("%.2lf\n",(float)sum/aux);
    return 0;
}
