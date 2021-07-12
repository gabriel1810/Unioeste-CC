#include <stdio.h>

void printVet(int N[]){
    int i;
    for (i = 0; i < 20; i++)
        printf("N[%d] = %d\n",i,N[i]);
}


void trocaPos (int N[]){
    int i = 0, j = 19, aux;

    for(i,j; i < 10; i++, j-- ){
        aux = N[i];
        N[i] = N[j];
        N[j] = aux;
    }
}

void lerVet(int N[]){
    int i;

    for (i = 0; i < 20; i++)
        scanf("%d",&N[i]);
}

int main(){
    int N[20];

    lerVet(N);
    trocaPos(N);
    printVet(N);
    return 0;
}
