#include <stdio.h>

int main() {
    int num, i, x, multiplos2 = 0, multiplos3 = 0, multiplos4 = 0, multiplos5 = 0;
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        scanf("%d", &x);
        if(x % 2 == 0) multiplos2++;
        if(x % 3 == 0) multiplos3++;
        if(x % 4 == 0) multiplos4++;
        if(x % 5 == 0) multiplos5++;
    }

    printf("%d Multiplo(s) de 2\n", multiplos2);
    printf("%d Multiplo(s) de 3\n", multiplos3);
    printf("%d Multiplo(s) de 4\n", multiplos4);
    printf("%d Multiplo(s) de 5\n", multiplos5);

    return 0;

}
