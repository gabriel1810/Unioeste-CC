#include <stdio.h>
#include <math.h>

int main() {
    int A,B,C,tamanho;

    while(1) {
        scanf("%d", &A);

        if(A == 0) return 0;

        scanf("%d%d", &B,&C);
        tamanho = (((A * B)*100)/C);
        printf("%d\n",(int)sqrt(tamanho));
    }
    return 0;
}
