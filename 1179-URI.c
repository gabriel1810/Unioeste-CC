#include <stdio.h>

void printVetImp(int vet[], int count){
    int j;
    for (j = 0; j < count; j++)
        printf("impar[%d] = %d\n",j,vet[j]);
}

void printVetPar(int vet[], int count){
    int j;
    for (j = 0; j < count; j++)
        printf("par[%d] = %d\n",j,vet[j]);
}

void lerVet(int vetPar[], int vetImpar[]){
    int i ,num ,parCount = 0,imparCount = 0;

    for(i = 0; i < 15; i++){
        scanf("%d",&num);
        if (num % 2 == 0){
            vetPar[parCount] = num;
            parCount++;
                if (parCount == 5){
                    printVetPar(vetPar,parCount);
                    parCount = 0;
                }
        }
        else if (num % 2 != 0){
                vetImpar[imparCount] = num;
                imparCount++;
                if (imparCount == 5){
                    printVetImp(vetImpar,imparCount);
                    imparCount = 0;
                }
        }

    }
        printVetImp(vetImpar,imparCount);
        printVetPar(vetPar,parCount);

}

int main(){
    int vetPar[5],vetImpar[5];

    lerVet(vetPar,vetImpar);

    return 0;
}
