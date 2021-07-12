#include <stdio.h>

int main (){
    int codigo,qnt;
    float preco;

    scanf("%d %d",&codigo,&qnt);

    if (codigo == 1) preco = qnt * 4;
    else if (codigo == 2) preco = qnt * 4.50;
    else if (codigo == 3) preco = qnt * 5;
    else if (codigo == 4) preco = qnt * 2;
    else if (codigo == 5) preco = qnt * 1.50;

    else return 0;

    printf("Total: R$ %0.2f\n",preco);

    return 0;
}
