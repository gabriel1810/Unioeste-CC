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
    int i,j;

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++)
                {
                    if (i == j) M[i][j] = 1;
                    else if (i < j) M[i][j] = j - i + 1;
                    else M[i][j] = i - j + 1;
                }
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
