#include <stdio.h>
#include <string.h>

int main (){
    int processos = 0, i;
    char rastro[50];
    int ciclo = 0;
    int read = 0;

    while(scanf("%s%*c",rastro) != EOF){

        scanf("%d",&processos);
        read = ciclo = 0;

            for(i = 0; i < strlen(rastro); i++){
                if(rastro[i] == 'R'){
                    read++;
                    if (read == processos){
                            ciclo++;
                            read = 0;
                    }
                }

                if(rastro[i] == 'W'){
                        ciclo++;
                        if (read > 0){
                            read = 0;
                            ciclo++;
                        }
                }
            }

    if (read > 0) ciclo++;
    printf("%d\n",ciclo);

    }
    return 0;
}
