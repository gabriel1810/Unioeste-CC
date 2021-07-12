#include <stdio.h>
#include <string.h>

int parenteses(char *expressao){
    int valid = 0;

	if (*expressao == ')'){
        printf("incorrect\n");
        return 0;
	}

	while ((*expressao) && (valid >= 0)){
		if (*expressao == '(')
			valid++;
		if (*expressao == ')')
			valid--;

		expressao+=1;
	}

	if (valid == 0)
		printf("correct\n");
	else
		printf("incorrect\n");
}

int main (){
	char expressao[1000];

	while (scanf(" %s", expressao) != EOF)
	{
        parenteses(expressao);
	}
	return 0;
}
