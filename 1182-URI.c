#include <stdio.h>

double operacaoMatriz(double M[][12], int coluna, char operacao){
    int i = 0;
    double sum = 0,media = 0;

    if (operacao == 'S'){
            for( i = 0; i < 12; i++)
                sum += M[i][coluna];

        printf("%0.1lf\n",sum);
        return 0;
    }
    else if (operacao == 'M'){
        for( i = 0; i < 12; i++)
                sum += M[i][coluna];

        media = sum/12;
        printf("%0.1lf\n",media);
        return 0;
    }
}

void preencheMatriz(double M[][12]){
    int i,j;
        for(i =0; i < 12; i++)
            for(j = 0; j < 12; j++)
                scanf("%lf",&M[i][j]);
}

int main(){
    double mat[12][12];
    char operacao;
    int coluna;

    scanf("%d ",&coluna);
    scanf("%c",&operacao);
    preencheMatriz(mat);
    operacaoMatriz(mat,coluna,operacao);
    return 0;
}

