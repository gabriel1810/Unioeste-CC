#include <stdio.h>

void printMat(int M[][100], int N){
    int i,j;
    int t,x=0;

    t = (M[N-1][N-1]);
    while(t > 0){
        t%10;
        t = t/10;
        x++;
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
          if(j == 0) printf("%*d",x,M[i][j]);
          else printf(" %*d",x,M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void fillMat(int M[][100], int N){
    int i,j,num = 1, padrao = 1;;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            M[i][j] = num;
            num*=2;
        }
        padrao*=2;
        num = padrao;
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
