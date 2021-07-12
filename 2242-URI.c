# include <stdio.h>

int vetSize(char s[]){
    int tam = 0;
    while (s[tam] != '\0')
        tam++;
    return tam;
}

int engracado (char str[]){
    int i = 0, tamanho = 0, j=0, tam_vogais, teste = 0;
    char vogais[100];
    char rev[100];
    tamanho = vetSize(str);

    for(i; i < tamanho; i++ ){
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||str[i] == 'u')
            vogais[j++] = str[i];
    }
    vogais[j] = '\0';
    tam_vogais = vetSize(vogais);

    for(i = 0, j = tam_vogais-1; i < tam_vogais; i++, j--){
        if(vogais[i] != vogais[j]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}

int main (){
    char str[100];

    scanf("%[^\n]",str);
    engracado(str);

    return 0;
}
