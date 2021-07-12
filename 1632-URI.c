#include <stdio.h>
#include <string.h>

void testaSenha(char senha[]){
    int i,mult = 1;
    for(i = 0; i < strlen(senha);i++){
        if(senha[i] == 'A' || senha[i] == 'E' || senha[i] == 'I' ||
           senha[i] == 'O' || senha[i] == 'S' || senha[i] == 'a' ||
           senha[i] == 'e' || senha[i] == 'i' || senha[i] == 'o' ||
           senha[i] == 's')
           mult *= 3;

        else mult *= 2;
    }
    printf("%d\n",mult);
}


int main(){
    int N;
    char senha[20];

    scanf("%d%*c",&N);
    while(N--){
        scanf("%s",senha);
        testaSenha(senha);
    }
    return 0;
}
