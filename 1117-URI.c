#include <stdio.h>

int printMedia(double media){
    media = media/2.00;
    printf("media = %0.2lf\n",media);
}

int isvalid(double nota){
    if ( nota < 0 || nota > 10) return 1;

    return 0;
}

int main (){
    double nota = 0,media = 0;
    int count = 0;

    scanf("%lf",&nota);
    while (1){
       if (isvalid(nota) == 1){ printf("nota invalida\n"); }

       else if (isvalid(nota) == 0){
            media += nota;
            count+=1;

            if( count == 2){  printMedia(media); return 0;}
       }
       scanf("%lf",&nota);
    }
    return 0;
}
