#include <stdio.h>

void tabuada(int num){
    int i = 1;
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n",i,num,num*i);
}

int main() {
   int num;
   scanf("%d",&num);
   tabuada(num);

   return 0;
}
