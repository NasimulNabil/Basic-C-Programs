#include<stdio.h>
int main()
{
    int i,num,isPrime;
    isPrime=1;
    printf("Input number:");
    scanf("%d",&num);
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1)
    {
        printf("%d is a prime number.",num);
    }
    else
    {
        printf("%d is not a prime number.",num);
    }
    return 0;

}
