#include <stdio.h>
#include <string.h>

void analisa(int N){
    int total = 0, i = 0, j = 0, tam = 0, letras[26];
    char frase[1000];
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";

    while (N > 0) {
        scanf("%[^\n]%*c",frase);
        tam = strlen(frase);

        for( i = 0; i < 26; i++)
            letras[i] = 0;

        for (i = 0; i < tam; i++)
            for (j = 0; j < 26; j++)
                if (frase[i] == alfabeto[j])
                    letras[j] = 1;

        total = 0;
        for (i = 0; i < 26; i++)
            total += letras[i];


        if      (total == 26) printf("frase completa\n");
        else if (total > 12)  printf("frase quase completa\n");
        else                  printf("frase mal elaborada\n");

            N--;
    }
}

int main() {
    int N;
    scanf("%d ", &N);
    analisa(N);

    return 0;
}
