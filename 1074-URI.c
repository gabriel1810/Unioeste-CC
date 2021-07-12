# include <stdio.h>

void odd_negative(int num){

    if (num %2 == 0 && num != 0) printf("EVEN ");
    else if (num %2 != 0) printf("ODD ");

    if (num > 0) printf("POSITIVE\n");
    else if (num < 0) printf("NEGATIVE\n");

    if (num == 0) printf ("NULL\n");
}

int main (){
    int N,num;
    scanf("%d",&N);

    while(N--){
        scanf("%d",&num);
        odd_negative(num);
    }

    return 0;
}
