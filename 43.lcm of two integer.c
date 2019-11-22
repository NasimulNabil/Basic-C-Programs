#include<stdio.h>
int main()
{
    int i,num1,num2,max,lcm=1;
    printf("Enter first integer:");
    scanf("%d",&num1);
    printf("Enter second integer:");
    scanf("%d",&num2);
    max=(num1>num2) ? num1:num2;
    i=max;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i += max;

    }
    printf("LCM of %d and %d = %d",num1,num2,lcm);
    return 0;
}
