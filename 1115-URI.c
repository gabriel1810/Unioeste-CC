#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);

    while((x!=0) || (y!=0)){
        if(x > 0 && y > 0)   printf("primeiro\n");
        if(x < 0 && y > 0)   printf("segundo\n");
        if(x < 0 && y < 0)   printf("terceiro\n");
        if(x > 0 && y < 0)   printf("quarto\n");
        if(x == 0 || y == 0) return 0;
        scanf("%d %d",&x,&y);
    }

    return 0;
}
