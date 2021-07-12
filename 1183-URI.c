// URI N�mero perfeito
#include <stdio.h>

int main(){
    int N, aux=1, soma=0;

    scanf("%d",&N);

    //while at� N-1 para acumular aux em soma

    while (aux < N){
        if(N % aux == 0) //O resto da divis�o de N e aux ser 0 significa que aux � divisivel por N
            soma += aux;
        aux++;
    }

    //se soma for igual ao N quer dizer que ele � perfeito
    if (soma == N) printf("eh perfeito\n");
    else printf("naum eh perfeito\n");

    return 0;
}
