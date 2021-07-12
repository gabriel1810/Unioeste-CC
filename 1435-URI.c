#include <stdio.h>

void printMat(int M[][100], int N){
    int i,j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++)
        {
            if (j == 0) printf("%3d",M[i][j]);
            else printf(" %3d",M[i][j]);
        }
            printf("\n");
    }
    printf("\n");
}

void fillMat(int M[][100], int N){
    int i,j,num = 0,x=1;
    int tam = N;

    while(1){
        for(i = num; i < tam; i++){
            for(j = num; j < tam; j++)
                M[i][j] = x;
            }
    if(tam == 0) break;
    tam--;
    num++;
    x++;
    }
}

int main(){
    int mat[100][100], N;

    scanf("%d",&N);
    while(1){
    if (N == 0) return 0;
    fillMat(mat,N);
    printMat(mat,N);

    scanf("%d",&N);

    }

    return 0;
}
