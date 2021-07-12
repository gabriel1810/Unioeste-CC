#include <stdio.h>

int main(){
    float altura, maior_altura, menor_altura;
    int num_entradas, aux=0;

    scanf("%d",&num_entradas);  //Quantidade de entradas
    scanf("%f",&altura);    //Inicialização das variaveis
    menor_altura = altura;
    maior_altura = altura;

    while (aux < num_entradas-1)    //A altura ja foi lida uma vez, então num_entradas-1
    {
        scanf("%f",&altura);
        if(altura < menor_altura) menor_altura = altura;
        else if (altura > maior_altura) maior_altura = altura;
        aux++;
    }

    printf("%0.1f\n",menor_altura);
    printf("%0.1f\n",maior_altura);
    return 0;
}
