#include <stdio.h>

void medias ( int N){
    float media1,media2,media3, ponderada;

    scanf("%f %f %f",&media1,&media2,&media3);
    ponderada = (media1*2 + media2 * 3 + media3 * 5)/10;
    printf("%0.1f\n", ponderada);
}

int main (){
    int N;
    scanf("%d",&N);
    while(N--)
        medias(N);

    return 0;
}
