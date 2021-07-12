#include <stdio.h>
int main()
{
    float N1, N2, N3, N4, notaExame , media_notas;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media_notas = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10; //Faz a media
    printf("Media: %0.1f\n", media_notas);

    if (media_notas >= 7.0) printf("Aluno aprovado.\n"); //Aluno é aprovado e acaba aqui

    else if (media_notas >= 5.0 && media_notas <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &notaExame);
        printf("Nota do exame: %0.1f\n", notaExame);

        if ((notaExame + media_notas / 2.0) > 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");

        printf("Media final: %0.1f\n", (notaExame + media_notas ) / 2.0);
    }

    else printf("Aluno reprovado.\n");

    return 0;
}
