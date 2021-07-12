#include <stdio.h>
void tipo(double A,double B,double C)
{
    if(A >= B + C)                      printf("NAO FORMA TRIANGULO\n");
    else if(A * A == B * B + C * C)     printf("TRIANGULO RETANGULO\n");
    else if(A * A > ((B * B)+(C * C)))  printf("TRIANGULO OBTUSANGULO\n");
    else if(A * A < B * B + C * C)      printf("TRIANGULO ACUTANGULO\n");
    if(A == B && B == C)                printf("TRIANGULO EQUILATERO\n");
    else if(A == B || B == C || A == C) printf("TRIANGULO ISOSCELES\n");
}

void decres(double *A,double *B,double *C) {
    double aux;

    if(*B > *A){
    aux=*A;
    *A=*B;
    *B=aux;
    }

    if(*C > *A){
    aux=*A;
    *A=*C;
    *C=aux;
    }

    if(*C > *B){
    aux=*B;
    *B=*C;
    *C=aux;
    }

}

int main(){
    double A,B,C;

    scanf("%lf %lf %lf",&A,&B,&C);
    decres(&A,&B,&C);
    tipo(A,B,C);

    return 0;
    }
