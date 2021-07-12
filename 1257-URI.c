#include <stdio.h>
#include <string.h>

int soma_hash(int qntLetras){
    char texto[100];
    int hash_num = 0, i, j;

    for (i = 0; i < qntLetras; i++) {
        scanf("%s",&texto);
        for (j = 0 ; j < strlen(texto); j++)
            hash_num += (int) texto[j] - 65 + i + j;
        }
    return hash_num;
}

void hash(int N){
    int qntLetras, hash_num = 0;

    while(N > 0){
        scanf("%d", &qntLetras);
        hash_num = soma_hash(qntLetras);
        printf("%d\n", hash_num);

        qntLetras = hash_num = 0;
        N--;
    }
}

int main() {
    int N;
    scanf("%d",&N);
    hash(N);

    return 0;
}
