#include <stdio.h>
int main(){
int S,T,F,total;
scanf("%d %d %d",&S,&T,&F);
total=S+T+F;
if(total>=24)
{
    int meianoite;
    meianoite=total-24;
    printf("%d\n",meianoite);
}
else if(total<0)
{
    int meiodia;
    meiodia=total+24;
    printf("%d\n",meiodia);
}
else
{
printf("%d\n",total);
}
return 0;
}
