#include <stdio.h>

void printVet(float N[]){
    int i;
    for(i = 0; i < 100; i++){
        if (N[i] <= 10)
            printf("A[%d] = %0.1f\n",i,N[i]);
    }

}

void lerVet(float N[]){
    int i;

    for(i = 0; i < 100; i++)
        scanf("%f",&N[i]);
}

int main(){
    float N[100];

    lerVet(N);
    printVet(N);

    return 0;
}
