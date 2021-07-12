#include <stdio.h>

double somaMatriz(double M[][12]){
    int i=0,j=0,aux = 1,col=11;
    double sum=0;

    for( i = 0; i < 5; i++){
                for(j = aux; j < col; j++)
                sum += M[i][j];

                aux++;
                col--;
            }
        printf("%0.1lf\n",sum);
        return 0;
}

double mediaMatriz(double M[][12]){
    int i = 0, j = 0, aux = 1,numMedia = 0,col=11;
    double sum = 0,media = 0;

        for( i = 0; i < 5; i++){
                for(j = aux; j < col; j++){
                sum += M[i][j];
                numMedia++;
                }
                aux++;
                col--;
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


