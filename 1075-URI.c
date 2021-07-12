# include <stdio.h>

void resto2 (int N){
    int i = 0;
    for (i = 0; i <= 10000;i++)
        if ( (i % N) == 2) printf("%d\n",i);
}

int main (){
    int N;
    scanf("%d",&N);
    resto2(N);

    return 0;
}
