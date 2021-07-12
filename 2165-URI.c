#include <stdio.h>

int main(){

    char tweet[1000];
    int i=0;

    gets(tweet);

    while (tweet[i] != '\0')
        i++;


    if (i > 140) printf("MUTE\n");
    else printf("TWEET\n");

    return 0;
}
