#include <stdio.h>
#include <string.h>

int main(){
    char texto[20000];
    scanf("%[^\n]*%c",texto);
    //corrigeTexto(texto);

    int i = 0, j = 0;
    char newTexto[20000];

    for(i = 0, j = 0; i < strlen(texto); i++){
            newTexto[j] = texto[i];
        if (texto[i] == ' ' && texto[i+1] == texto[i+3] && texto[i+2] == texto[i+4]) i+=2;
        j++;
    }
    newTexto[j] = '\0';
    printf("%s\n",newTexto);

    return 0;
}
