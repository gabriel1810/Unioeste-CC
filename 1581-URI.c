#include <stdio.h>
#include <string.h>

void idioma(int N){
    int pessoas, in;
	char str1[50], str2[50];

    while (N--){
		scanf("%d ", &pessoas);
		scanf("%s", str1);
		pessoas--;
		in = 0;

		strcpy(str2, str1);
		while (pessoas--)
		{
			if (strcmp(str1, str2) != 0 && in == 0)
				in++;
			else
				strcpy(str2, str1);

			scanf(" %s", str1);
		}

		if (in == 1)
			printf("ingles\n");
		else
			printf("%s\n", str1);

		in = 0;
	}
}

int main (){
	int N;

	scanf("%d", &N);
	idioma(N);
    return 0;
}
