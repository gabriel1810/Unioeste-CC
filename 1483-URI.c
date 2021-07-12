#include <stdio.h>

int contaPares(int M[][100], int NL, int NC){
int i,j,pares=0,impar = 0,vl;

    for(i = 0; i < NL;i++){
        for(j = 0; j < NC;j++){
            vl = M[i][j];
            if(vl%2 != 0) impar++;
        }
        if(impar == 0 ){
            pares++;
            impar = 0;
        }
    impar = 0;
    }

    return pares;

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
    printf("%d\n",contaPares(mat,NL,NC));

    return 0;
}
