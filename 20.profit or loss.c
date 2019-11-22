#include<stdio.h>
int main()
{
    float bp,sp,amt;
    printf("buy: ");
    scanf("%f",&bp);
    printf("sell: ");
    scanf("%f",&sp);
    amt=((sp-bp)/bp)*100;
    if(amt>0)
    {
        printf("profit: %.2f % %",amt);
    }
    else if(amt<0)
    {
        printf("loss:%.2f%%",-amt);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
