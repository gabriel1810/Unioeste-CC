//uri Média de positivos e negativos
#include <stdio.h>

int main (){
    int N, num,aux=0, counter_neg=0, counter_pos=0;
    float media_positivos, media_negativos, perc_pos, perc_neg;

    scanf ("%d",&N);

    while (aux < N){
        scanf("%d",&num);
            if (num < 0){
                media_negativos += num;
                counter_neg++;
            }
            else{
                media_positivos += num;
                counter_pos++;
            }
        aux ++;
    }

    //Calcula e printa as medias
    printf("%0.1f\n", media_positivos/counter_pos);
    printf("%0.1f\n", media_negativos/counter_neg);

    //calcula a porcentagem
    perc_pos = (float)counter_pos/N;
    perc_neg = (float)counter_neg/N;

    //printa as porcentagens
    printf("%0.1f%c\n", perc_pos*100,'%');
    printf("%0.1f%c\n", perc_neg*100,'%');
    return 0;
}
