# include <stdio.h>

int vetSize(char s[]){
    int tam = 0;
    while (s[tam] != '\0')
        tam++;
    return tam;
}

void comparador ( int N){
    int i = 0, tam_palavra, count = 0;
    char palavra[10];

    while (N > 0){
        scanf("%[^\n]",palavra);
        tam_palavra = vetSize(palavra);
        if ( tam_palavra == 5 ) printf("3\n");
        else {
            for(i; i < tam_palavra; i++ ){
                if( palavra[i] == 'o') {count++; i++; }
                if( palavra[i] == 'n') {count++; i++; }
                if( palavra[i] == 'e') {count++; i++; }
            }
                if (count >= 2) printf("1\n");
                else printf("2\n");
        }
        N--;
        i = tam_palavra = count = 0;
        scanf("%c");
    }
}
int main (){
    int N;
    scanf("%d ",&N);
    comparador(N);

    return 0;
}
