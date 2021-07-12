#include <stdio.h>

int main(){
    int num = 0, i = 0;
    int fatorial = 0;

    scanf("%d",&num);
    fatorial = num;
    for (i = 2; i < num; i++){
        fatorial *= i;
    }
    printf("%d\n",fatorial);

    return 0;
}
