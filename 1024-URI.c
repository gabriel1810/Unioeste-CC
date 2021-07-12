#include <stdio.h>

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

int vetSize(char s[]){
    int tam = 0;
    while (s[tam] != '\0')
        tam++;
    return tam;
}

void codifica (int N, char s[]){
   int i = 0, j = 0, tam;

   while (N > 0){
   scanf("%[^\n]",s);
   tam = vetSize(s);
   j = tam - 1;

    /**Primeiro processamento**/
    for (i = 0; i < tam ; i++){
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            s[i] += 3;
    }

    /**Segundo processamento **/
    reverte(tam,s);

    /**Terceiro processamento **/
    for (i = tam/2 ; i < tam; i++){
        s[i] -= 1;
    }

    printf("%s\n",s);
    N--;
    scanf("%c");    //Limpar buffer
   }
}

int main (){
    int N;
    char str[1000];

    scanf("%d ",&N);
    codifica(N, str);
    return 0;
}
