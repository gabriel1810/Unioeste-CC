/*  uri soma par e soma �mpar
    Identificar se o n�mero � par ou �mpar e somar � respectiva vari�vel */
#include <stdio.h>

int main ()
{
    int x, result_pares = 0, result_impares = 0;

    scanf("%d",&x);

    while (x >= 0 ){
        if ((x % 2) == 0)             //verifica se o n�mero � par
            result_pares += x;        //se for par

        else result_impares +=x;      //se for impar

        scanf("%d",&x);
        }

    printf("%d\n%d\n",result_pares,result_impares);
    return 0;
}
