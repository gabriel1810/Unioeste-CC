#include <stdio.h>

int somaContorno(int M[][100], int NL, int NC){
int i,j=0,soma=0;
    for(i =0; i < NL;i++){
        if(i == 0 || i == NL-1) {
            while(j < NC){
               soma+=M[i][j];
               if(M[i][j] != 1) break;
               j++;
            }
            j=0;
        }
        else{
            soma+= M[i][0] + M[i][NC-1];
        }
    }
    return soma;
}

int somaMatriz(int M[][100], int NL, int NC){
int i,j,sum=0;
    for(i = 0; i < NL;i++)
        for(j = 0; j < NC;j++)
            sum+= M[i][j];
    return sum;
}

int verificaMatriz(int M[][100], int NL, int NC){
    int i,j,sumTotal=0,diagPrinc=0,diagSec=0,sumContorno=0;
    int aux = NC-1;

    sumTotal = somaMatriz(M,NL,NC);
    sumContorno = somaContorno(M,NL,NC);

    for(i = 0; i < NL;i++)
        for(j = i; j < i+1 ;j++)
            diagPrinc += M[i][j];

     for(i = 0; i < NL;i++){
        for(j = aux; j < aux+1 ;j++){
            diagSec += M[i][j];
        }
        aux--;
     }
    if (NL == NC && (sumTotal == diagPrinc)) return 1;
    if (NL == NC &&(sumTotal == diagSec))    return 2;
    if (sumTotal == sumContorno)             return 3;
    else return 0;

}

void fillMat(int M[][100],int NL, int NC){
    int i, j;

    for(i = 0; i < NL;i++)
        for(j = 0; j < NC;j++)
            scanf("%d",&M[i][j]);
}

int main (){
    int mat[100][100],NL,NC;
    scanf("%d %d",&NL,&NC);
    fillMat(mat,NL,NC);
    printf("%d\n",verificaMatriz(mat,NL,NC));
    return 0;
}
