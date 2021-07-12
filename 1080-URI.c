#include <stdio.h>

int main (){
    int num, maiorValor = 0, posMaior = 0;
    int i = 0;

    for(i = 1; i <= 100; i++){
        scanf("%d",&num);
        if ( num > maiorValor){
            maiorValor = num;
            posMaior = i;
        }
    }
    printf("%d\n%d\n",maiorValor,posMaior);

    return 0;
}
