#include <stdio.h>
#include <math.h>

int main(){
    float A,B,C;
    A = B = C = 0;
    float delta,raiz_1,raiz_2;
    delta = raiz_1 = raiz_2 = 0;

    scanf("%f %f %f",&A,&B,&C);

    delta = (B*B) - 4*A*C;

    if (delta >= 0 && A != 0){
        raiz_1 = ((-B)+sqrt(delta))/(2*A);
        raiz_2 = ((-B)-sqrt(delta))/(2*A);
        printf("R1 = %0.5f\n",raiz_1);
        printf("R2 = %0.5f\n",raiz_2);
    } else printf("Impossivel calcular\n");

return 0;
}
