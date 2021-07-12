#include <stdio.h>
#include <string.h>

void sentenca(char str[]){
    int i, num;

    while(NULL != gets(str)){
        num = 0;
        for(i = 0; i < strlen(str); i++){
            if(str[i] == '\0') break;

            if(num == 0){
                if(str[i] >= 97){
                    printf("%c", str[i] - 32);
                    num = 1;
                }
                else if(str[i] == 32){
                    printf("%c", str[i]);
                }
                else{
                    printf("%c", str[i]);
                    num = 1;
                }
        }
            else{
                if(str[i] >= 97){
                    printf("%c", str[i]);
                    num = 0;
                }
                else if(str[i] == 32){
                    printf("%c", str[i]);
                }
                else{
                    printf("%c", str[i] + 32);
                    num = 0;
                }
        }
    }
         printf("\n");
    }
}

int main(){
    char texto[100];
    sentenca(texto);
    return 0;
}
