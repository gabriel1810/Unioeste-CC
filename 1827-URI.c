#include <stdio.h>
#include <math.h>

void printMat(int M[][102], int N){
    int i,j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j ++)
            printf("%d",M[i][j]);

    printf("\n");
    }
    printf("\n");
}

void fillMat(int M[][102], int N){
    int i,j,aux=0,x,y,cont = N/3,center;

    for(i = 0; i < N; i++)  //preencher com 0
        for(j = 0; j < N; j ++)
            M[i][j] = 0;

    for(i = 0; i < N; i ++)  //diagonal principal
        M[i][i] = 2;

    for(i = N-1; i >= 0;i--){   //diagonal secundaria
        for(j = aux; j < aux+1; j++)
            M[i][j] = 3;
            aux++;
    }

    aux = N - (cont*2);
    for(i = cont,x = 1; x <= aux; i++,x++){  //preencher com 1
        for(j = cont,y = 1; y <= aux; j++,y++)
            M[i][j]=1;
        }

    center = floor(N/2);
    M[center][center] = 4;

}

int main(){
    int mat[102][102], N;

    while(scanf("%d",&N) != EOF){
    if (N == 0) return 0;
    fillMat(mat,N);
    printMat(mat,N);
    }
    return 0;
}
