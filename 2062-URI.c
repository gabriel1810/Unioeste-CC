#include <stdio.h>
#include <string.h>

void obi_uri(int N){
    char texto[1000];
    int tamanho = 0;

    while(N > 0){
        scanf("%s", texto);
        tamanho = strlen(texto);


        if (tamanho == 3 && texto[0] == 'O' && texto[1] == 'B')
            printf("OBI");
        else if (tamanho == 3 && texto[0] == 'U' && texto[1] == 'R')
            printf("URI");
        else
            printf("%s", texto);

        if (N != 1)
            printf(" ");
        N--;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d ", &N);
    obi_uri(N);

    return 0;
}
