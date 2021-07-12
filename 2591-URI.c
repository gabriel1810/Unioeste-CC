
//DANDO WRONG ANSWER
#include <stdio.h>
#include <string.h>

void kame(int N){
    char frase[300], i = 0, a = 0, b = 0, num = 0;

    while(N--){
     scanf("%s",frase);

     i = 0;
        for(i = 0; i < strlen(frase); i++){
            if (frase[i] == 'a') a++;
            if (frase[i] == 'a' && frase[i+1] != 'a') break;
        }
        i++;
        for(i ; i < strlen(frase); i++){
            if (frase[i] == 'a') b++;
            if (frase[i] == 'a' && frase[i+1] != 'a') break;
        }
        num = a * b;
        if (num != 0){
        printf("k");
        for(num; num > 0; num--)
            printf("a");

        printf("\n");
        }
        num = b = a = 0;
    }
}

int main (){
    int N;
    scanf("%d ", &N);
    kame(N);

    return 0;
}
