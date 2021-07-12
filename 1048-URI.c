#include <stdio.h>

int main (){
    float sal,novosal;

    scanf("%f",&sal);
    if(sal <= 400.00){
        novosal = sal * 0.15;
        printf("Novo salario: %0.2f\n",novosal+sal);
        printf("Reajuste ganho: %0.2f\n",novosal);
        printf("Em percentual: 15 %%\n");}
    if(sal >= 400.01 && sal <= 800.00){
        novosal = sal * 0.12;
        printf("Novo salario: %0.2f\n",novosal+sal);
        printf("Reajuste ganho: %0.2f\n",novosal);
        printf("Em percentual: 12 %%\n");}
    if(sal >= 800.01 && sal <= 1200.00){
        novosal = sal * 0.1;
        printf("Novo salario: %0.2f\n",novosal+sal);
        printf("Reajuste ganho: %0.2f\n",novosal);
        printf("Em percentual: 10 %%\n");}
    if(sal >= 1200.01 && sal <= 2000.00){
        novosal = sal * 0.07;
        printf("Novo salario: %0.2f\n",novosal+sal);
        printf("Reajuste ganho: %0.2f\n",novosal);
        printf("Em percentual: 7 %%\n");}
    if(sal > 2000.00){
        novosal = sal * 0.04;
        printf("Novo salario: %0.2f\n",novosal+sal);
        printf("Reajuste ganho: %0.2f\n",novosal);
        printf("Em percentual: 4 %%\n");}
return 0;
}
