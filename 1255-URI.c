#include <stdio.h>
#include <string.h>

void printFreq(int frequencia[],int maior,char alfabeto[]){
    int i = 0;
    for (i ; i < 26; i++)
        if (frequencia[i] == maior)
            printf("%c", alfabeto[i]);

        printf("\n");
}

int setMaior(int maior, int frequencia[]){
    int i = 1;
    for (i; i < 26; i++)
        if (frequencia[i] > maior)
            maior = frequencia[i];
    return maior;
}

void frequencia (int N){
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz", palavra[1000];
    int frequencia[26], i, j, maior;

    while (N > 0) {
        scanf ("%[^\n]%*c", palavra);

        for (i = 0; i < 26; i++)
            frequencia[i] = 0;

        for (i = 0; i < strlen(palavra); i++) {
            for (j = 0; j < 26; j++) {
                if (palavra[i] == alfabeto[j] || palavra[i]+32 == alfabeto[j]) {
                    frequencia[j]++;
                }
            }
         }

        maior = setMaior(maior,frequencia);
        printFreq(frequencia,maior,alfabeto);

        i = j = maior = 0;
        N--;
    }
}

int main() {
    int N;

    scanf("%d ",&N);
    frequencia(N);

    return 0;
}
