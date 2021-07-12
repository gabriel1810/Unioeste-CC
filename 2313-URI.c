#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, aux;

    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c && c > b) {
        aux = b;
        b = c;
        c = aux;
    }
    if (b > a && b > c) {
        aux = a;
        a = b;
        b = aux;
        if (c > b) {
            aux = c;
            c = b;
            b = aux;
        }
    }
    if (c > a && c > b) {
        aux = a;
        a = c;
        c = aux;
        if (c > b) {
            aux = c;
            c = b;
            b = aux;
        }
    }
    if (a >= b + c) {
        printf("Invalido\n");
    }
    else {
        printf("Valido-");

        if (a == b && b == c)
            printf("Equilatero\n");

        else if (a == b || a == c || b == c)
            printf("Isoceles\n");

        else
            printf("Escaleno\n");

        printf("Retangulo: ");
        if (pow(a,2) == pow(b,2)+pow(c,2))
            printf("S\n");

        else
            printf("N\n");
    }
    return 0;
}
