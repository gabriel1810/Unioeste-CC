#include <stdio.h>

void printVet(int vetB[], int nB){
    int i = 0;
    for (i ;i < nB ;i++)
        printf("%d\n",vetB[i]);
}

void organizaVet(int vetA[], int nx, int vetB[], int *nB){
    int i = 1,j ,chk = 0,cont = 1;
    int aux;

    vetB[0] = vetA[0];
    for( i; i < nx ; i++ ){
        chk = 0;
        aux = vetA[i];

        for(j = i; j >= 0; j--)
            if(vetA[j] == aux) chk++;

        if (chk == 1){
           vetB[cont] = aux;
           cont++;
        }
    }
    *nB = cont;
}

void lervet(int vx[],int *px){
    int i;

    scanf("%d", px);
    for(i = 0;i < *px; i++)
        scanf("%d",&vx[i]);
}

int main (){

    int vet[100],vetB[100];
    int n,nB;

    lervet(vet,&n);
    organizaVet(vet,n,vetB,&nB);
    printVet(vetB,nB);
    return 0;
}
