#include<stdio.h>
int main()
{
    int i,j,start,end;
    int isPrime;
    printf("Input lower limit:");
    scanf("%d",&start);
    printf("Input upper limit:");
    scanf("%d",&end);
    printf("Prime numbers between %d to %d:\n",start,end);
    if(start<2)
    {
        start=2;
    }
    for(i=start; i<=end; i++)
    {
        isPrime=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;

}
