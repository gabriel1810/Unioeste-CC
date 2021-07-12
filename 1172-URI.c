//uri 1172
#include <stdio.h>

void printVet(int x[]){
    int i;

    for(i = 0; i < 10; i++){
        printf("X[%d] = %d\n",i,x[i]);
    }
}

void tiraNulos(int x[]){
    int i;

    for(i = 0; i < 10; i++){
        if(x[i] <= 0)
            x[i] = 1;
    }
}

void lervet(int x[]){
    int i;

    for(i = 0; i < 10; i++)
        scanf("%d",&x[i]);
}


int main(){
    int x[10];

    lervet(x);
    tiraNulos(x);
    printVet(x);

    return 0;
}
