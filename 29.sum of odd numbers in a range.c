#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter lower limit:");
    scanf("%d",&a);
    printf("Enter upper limit:");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("Sum of all odd number between %d to %d: %d\n",a,b,sum);
    return 0;
}
