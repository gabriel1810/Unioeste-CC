#include <stdio.h>
#include <string.h>

int main(){

    char text[11000];
    int N,i=0;
    float tempo=0;

    scanf("%d ",&N);
    while(N--){
        scanf("%s",text);
        tempo = strlen(text);
        printf("%0.2lf\n", tempo/100.0);
    }

    return 0;
}
