#include <stdio.h>
#include <string.h>

void diamantes(char texto[]){
    int i,j, diamante;

        diamante = 0;
        for (i = 0; i < strlen(texto); i++){
            if (texto[i] == '\0')
                break;
            if (texto[i] == '<'){
                for (j = i; j< strlen(texto); j++){
                    if (texto[j] == '>'){
                        diamante++;
                        texto[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", diamante);
}

int main(){
    int N = 0;
    char solo[1000];
    scanf("%d", &N);
    while(N--){
        scanf("%s",&solo);
        diamantes(solo);
    }

    return 0;
}
