#include <stdio.h>

void printVet( char strCombinado[], int i, int j){
    int aux = 0;
    while (strCombinado[aux] != '\0'){
        printf("%c",strCombinado[aux]);
        aux++;
    }
    printf("\n");
}

void gravaResto(int tam1, int tam2, char strCombinado[], char str1[], char str2[], int j, int maior){

    if (tam1 > tam2){
        for (j ; tam2 <= maior; tam2++, j++)
        strCombinado[j] = str1[tam2];
    }
    else if (tam2 > tam1){
        for (j ; tam1 <= maior; tam1++, j++)
        strCombinado[j] = str2[tam1];
    }
    strCombinado[j] = '\0';
}

int vetSize(char s[]){
    int tam = 0;
    while (s[tam] != '\0')
        tam++;
    return tam;
}

void combinador ( char str1[], char str2[], int N){
    int i, tam1, tam2, menor, maior, j = 0;
    char strCombinado[100];

    while (N > 0){
    scanf("%s",str1);
    scanf("%s",str2);

    tam1 = vetSize(str1);
    tam2 = vetSize(str2);
    menor = tam1 < tam2 ? tam1 : tam2;
    maior = tam1 > tam2 ? tam1 : tam2;

    for(i = 0; i < menor; i++ ){
        strCombinado[j++] = str1[i];
        strCombinado[j++] = str2[i];
    }

    gravaResto(tam1,tam2,strCombinado,str1,str2,j,maior);
    printVet(strCombinado, i, j);

    N--;
    i = tam1 = tam2 = menor = maior = j = 0;
    }

}

int main (){
    int N;
    char str1[100], str2[100];

    scanf("%d ",&N);
    combinador(str1,str2,N);

    return 0;
}
