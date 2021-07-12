//uri 1364
#include <stdio.h>

int somaSequencia (int linha[], int N){
    int soma = 0, j = N/3, i = 0;
    int soma_parc = 0;
    int aux = N/3;

    for(i = 0; i < N; i++){
        soma_parc += linha[i];
        if (i == j-1){
            soma = soma > soma_parc ? soma : soma_parc;
            soma_parc = 0;
            j = j+aux;
        }
    }
    return soma;
}

void lerVet(int linha[], int *N){
    int i = 0;
    scanf("%d",N);
    for(i = 0; i < *N; i++)
        scanf("%d",&linha[i]);
}

int main (){
    int N;
    int linha[100];
    lerVet(linha,&N);

    printf("%d", somaSequencia(linha,N));

    return 0;
}
