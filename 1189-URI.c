#include <stdio.h>

double somaMatriz(double M[][12]){
    int i=0,j=0,aux = 11,lin = 1;
    double sum=0;

        for(j = 0; j < 5; j++){
            for(i = lin ; i < aux; i++)
                sum += M[i][j];

                aux--;
                lin++;
            }
        printf("%0.1lf\n",sum);
        return 0;
}

double mediaMatriz(double M[][12]){
    int i = 0, j = 0, aux = 11,numMedia = 0,lin=1;
    double sum = 0,media = 0;

        for(j = 0; j < 5; j++){
            for(i = lin ; i < aux; i++){
                sum += M[i][j];
                numMedia++;
                }
                aux--;
                lin++;
            }
        media = sum/numMedia;
        printf("%0.1lf\n",media);
        return 0;
    }

void preencheMatriz(double M[][12]){
    int i,j;
        for(i =0; i < 12; i++)
            for(j = 0; j < 12; j++)
                scanf("%lf",&M[i][j]);
}

int main(){
    char operacao;
    double mat[12][12];

    scanf("%c ",&operacao);
    preencheMatriz(mat);
    if (operacao == 'S') somaMatriz(mat);
    else mediaMatriz(mat);
    return 0;
}


