#include <stdio.h>
int main(){
    float A,B,C,perimetro,area;

    scanf("%f %f %f",&A,&B,&C);

    if (((B + C) > A) && ((A + C) > B) && ((A + B) > C)) {
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n",perimetro);}

    else {
        area = ((A + B)* C)/2;
        printf("Area = %0.1f\n",area);}

    return 0;
}
