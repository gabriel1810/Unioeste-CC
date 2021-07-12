#include <stdio.h>

void printVet(int N[]){
    int i;

    for(i = 0; i < 10; i++)
        printf("N[%d] = %d\n",i,N[i]);

}
void preencheVet(int N[], int v){
    int i, mult = 2;

    N[0] = v;
    for(i = 1; i < 10; i++, mult *= 2){
        N[i] = v * mult ;

    }
}

int main(){
    int N[10], v = 0;

    scanf("%d",&v);
    preencheVet(N,v);
    printVet(N);

    return 0;
}
