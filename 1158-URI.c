#include <stdio.h>

int somaImpar (int X, int Y){
    int sum = 0,i = 0;
    i = X;
    while(Y > 0){
        if(i%2){
            Y--;
            sum += i;
        }
        i++;
    }
    return sum;
}

int main(){
    int N,X,Y;

    scanf("%d",&N);
    while(N--){
        scanf("%d %d",&X,&Y);
        printf("%d\n",somaImpar(X,Y));
    }

    return 0;
}
