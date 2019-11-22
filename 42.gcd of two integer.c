#include<stdio.h>
int main()
{
    int i,num1,num2,min,gcd=1;
    printf("Enter first integer:");
    scanf("%d",&num1);
    printf("Enter second integer:");
    scanf("%d",&num2);
    min=(num1<num2) ? num1:num2;
    for(i=1; i<=min; i++)
    {
        if(num1%i==0 &&num2%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d = %d\n",num1,num2,gcd);
    return 0;

}
