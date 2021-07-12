#include <stdio.h>

int main(){
    int N,i;
    char str[34]="LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d",&N);

    for(i = 0; i < N; i++)
        printf("%c", str[i]);

    printf("\n");

    return 0;
}
