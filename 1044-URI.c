#include <stdio.h>
int main (){
    int N1 = 0, N2 = 0, resto = 0;

    scanf("%d %d",&N1,&N2);

    resto = ((N1 % N2 == 0) || (N2 % N1 == 0)) ?
    printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");

    return 0;
}
