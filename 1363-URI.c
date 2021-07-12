#include <stdio.h>
//soma decimal uri 1363 - Aquecimento II

void lervet (int vet_a[],int vet_b[],int nx){
    int aux=0;

    for (aux;aux<nx;aux++)
    scanf("%d",&vet_a[aux]);

    for(aux=0;aux<nx;aux++)
    scanf("%d",&vet_b[aux]);
}

int soma_vetores (int vet_a[],int vet_b[],int nx){
    int soma_t =0,mult=1,soma_parcial=0;
    int i = nx-1;

    for( i ; i >= 0 ; i--){
        soma_parcial = 0;
        soma_parcial = vet_a[i] + vet_b[i];
        soma_parcial *= mult;
        soma_t += soma_parcial;
        mult = mult*10;
    }
    return soma_t;
}

int main(){
    int n, soma_total;
    int vet1[100], vet2[100], vetSoma[100];

    scanf("%d",&n);
    lervet(vet1,vet2,n);
    soma_total = soma_vetores(vet1,vet2,n);
    printf("%d",soma_total);

return 0;
}
