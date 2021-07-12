#include <stdio.h>

void avancaLetra(char str1[], char str2[]){
    int sum = 0;
    int i = 0, aux = 0;

		while(str1[i] != '\0'){
			aux =  str2[i] - str1[i];
			if (aux < 0)    sum += aux + 26;
			else    sum += aux;
			i++;
		}

    printf("%d\n",sum);
}

int main (){
	char str1[100000], str2[100000];
	int i, N,soma,aux;

	scanf("%d",&N);

	while (N--) {
        scanf("%s %s", str1, str2);
        avancaLetra(str1,str2);
	}

	return 0;
}
