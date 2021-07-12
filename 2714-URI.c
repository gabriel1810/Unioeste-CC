#include <string.h>
#include <stdio.h>

int valida(char senha[]){
    int i,chk = 0,number = 0;

    if (senha[0] != 'R' || senha[1] != 'A'){
            return 1;
        }

    for(i = 2; i < strlen(senha); i++){
        if (senha[i] == '0') chk ++;
        if(senha[i] != '0') number++;
    }

    if (chk == 0 || number == 0) return 1;

    if (strlen(senha) < 20) return 1;

return 0;
}


void senha(int N){
    char senha [100];
    int i,j = 0;
    char newsenha[100];

    while(N--){
        i = j = 0;
        scanf("%s",senha);

        if (valida(senha) == 0){
            for(i = 2; i < strlen(senha); i++){
                if(senha[i] != '0') break;
            }

        for(i; i < strlen(senha); i++){
            newsenha[j] = senha[i];
            j++;
        }

        newsenha[j] = '\0';
        printf("%s\n",newsenha);
    }
    else printf("INVALID DATA\n");

}

}

int main(){
    int N;

    scanf("%d ",&N);

    senha(N);

    return 0;

}

