#include <stdio.h>
#include <string.h>

void msgOculta(int N){
    int i = 0;
    char linha[50];

    while(N--){
        scanf("%[^\n]%*c",linha);

        if(linha[0] > 96 && linha[0] < 123)
            printf("%c",linha[0]);

        for(i = 1 ; i < strlen(linha) ; i++){
            if(linha[i] > 96 && linha[i] < 123){
                if (linha[i-1] < 96 || linha[i-1] > 123)
                    printf("%c",linha[i]);
            }
        }
        printf("\n");

    }
}

int main (){
    int N;
    scanf("%d ",&N);
    msgOculta(N);

    return 0;
}
