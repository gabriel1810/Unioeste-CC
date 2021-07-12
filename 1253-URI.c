#include <stdio.h>

int vetSize(char s[]){
    int tam = 0;
    while (s[tam] != '\0')
        tam++;
    return tam;
}

void decifrar (int N){
    char str[100];
    int desloc = 0, tamanho = 0, i;

    while (N > 0){
        scanf("%s",str);
        scanf("%d",&desloc);

        tamanho = vetSize(str);

        for (i = 0; i < tamanho; i++){
            if ((str[i] - desloc) >= 65 )
                str[i] -= desloc;

            else if (str[i] < (65 + desloc) ){
                str[i] = 90 - desloc + (str[i] - 65) +1;
                }
        }
        printf("%s\n",str);
        i = 0;
        N--;
    }
}

int main(){
    int N;
    scanf("%d ",&N);
    decifrar(N);

    return 0;
}
