#include <stdio.h>

int main () {
    int M,N,i = 0,sum = 0,maior,menor;

    scanf("%d %d",&M,&N);
    while(1){
        if (M <= 0 || N <= 0) return 0;

        maior = M > N? M:N;
        menor = M < N? M:N;

        for(i = menor; i <= maior; i++)
            printf("%d ",i);

        for(i = menor; i <= maior; i++)
            sum += i;

        printf("Sum=%d\n",sum);
        sum = maior = menor = 0;
        scanf("%d %d",&M,&N);
    }

    return 0;
}
