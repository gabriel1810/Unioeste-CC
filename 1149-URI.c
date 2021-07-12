#include <stdio.h>

int soma_inteiros(int A, int N){
    int sum = 0;
    while(N--)
        sum += A++;

    return sum;
}

int main(){
    int N,A;
    scanf("%d",&A);
    while(1){
        scanf("%d",&N);
        if(N > 0) break;
   }
    printf("%d\n",soma_inteiros(A,N));

    return 0 ;
}
