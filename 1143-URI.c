#include <stdio.h>

int main(){
    int N,aux=1;

    scanf("%d",&N);

    while(N--){
        printf("%d %d %d\n",aux,aux*aux,aux*aux*aux);
        aux++;
    }

    return 0;
}
