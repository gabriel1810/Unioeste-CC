#include <stdio.h>

void printMat(int M[][100], int N){
    int i,j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++)
            printf("%d",M[i][j]);

            printf("\n");
    }
}

void fillMat(int M[][100], int N){
    int i,j,num =1;


            for(i = 0;i < N; i++)
                for(j = 0; j < N; j++)
                    M[i][j] = 3;

            for(i = 0; i < N; i++){
                for(j = num-1; j < num;j++)
                    M[i][j] = 1;

                num++;
                }
            num = N-1;
            for(i = 0; i < N; i++){
                for(j = num; j > num-1; j--)
                    M[i][j] = 2;

                    num--;
            }
}

int main(){
    int mat[100][100], N;

    while(scanf("%d",&N) != EOF){
    if (N == 0) return 0;
    fillMat(mat,N);
    printMat(mat,N);
    }

    return 0;
}
