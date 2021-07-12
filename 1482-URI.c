#include <stdio.h>
#include <ctype.h>
#include <string.h>

void codigo(int v[],int n){
    int i,comp = v[0],cod = 0;
    for(i = 1; i < n;i++)
        if(v[i] > comp) cod++;

    printf("%d\n",cod);
}

void str_toInt(char s[], int v[], int *n){
    int x = 0, *p = v, i,aux=1,j = 0;

    for(i = strlen(s)-1; i >= 0;i--){

        if(isdigit(s[i])){
            x += (s[i]-48)*aux;
            aux*=10;};

        if(isdigit(s[i]) && !(isdigit(s[i-1]))){
            aux = 1;
            v[j++] = x;
            x = 0;
            *n = *n+1;};
    }
}

void process(char str[]){
    int vet[1000],n=0;
    str_toInt(str,vet,&n);
    codigo(vet,n);
}

int main(){
    int N;
    char str[1000];
    scanf("%d%*c",&N);
    while(N--){
        scanf("%[^\n]%*c",str);
        process(str);
    }
    return 0;
}
