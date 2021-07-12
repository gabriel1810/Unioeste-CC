#include <stdio.h>
#include <string.h>

void jogo (int N){
    char str_shel[100], str_raj[100];

    while (N > 0){
    scanf("%s%s", str_raj, str_shel);

    if (strcmp(str_raj, str_shel)       == 0)                                         printf("empate\n");
    else if (strcmp(str_raj, "spock")   == 0 && strcmp(str_shel, "pedra")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "lagarto") == 0 && strcmp(str_shel, "spock")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "tesoura") == 0 && strcmp(str_shel, "lagarto") == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "papel")   == 0 && strcmp(str_shel, "spock")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "tesoura") == 0 && strcmp(str_shel, "papel")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "papel")   == 0 && strcmp(str_shel, "pedra")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "lagarto") == 0 && strcmp(str_shel, "papel")   == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "pedra")   == 0 && strcmp(str_shel, "lagarto") == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "spock")   == 0 && strcmp(str_shel, "tesoura") == 0)     printf("rajesh\n");
    else if (strcmp(str_raj, "pedra")   == 0 && strcmp(str_shel, "tesoura") == 0)     printf("rajesh\n");

    else printf("sheldon\n");
    N--;
  }
}

int main (){
  int N;

  scanf("%d ",&N);
  jogo(N);
  return 0;
}
