#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printVet( char str[]){
    int aux = 0;
    while (str[aux] != '\0'){
        printf("%c",str[aux]);
        aux++;
    }
    printf("\n");
}

void reverte(int tam, char s[]){
    int i=0, j = tam-1;
    char rev[1000];
    for (i = 0; i < tam; i++){
        rev[i] = s[j];
        j--;
    }
    for(i = 0; i < tam; i++)
        s[i] = rev[i];
}

void decifra (int N){
    char str[100];
    char decifrado[100];
    int tamanho = 0, i = 0, j = 0;

    while( N > 0){
        scanf("%s",str);
        tamanho = strlen(str);
        reverte(tamanho,str);

        for(i ; i < tamanho; i++){
                if (islower(str[i])){
                    decifrado[j] = str[i];
                    j++;
                }
        }
        decifrado[j] = '\0';
        printVet(decifrado);

        N--;
        j = i = tamanho = 0;
    }
}

int main (){

    int N;
    scanf("%d ", &N);
    decifra(N);

    return 0;
}
