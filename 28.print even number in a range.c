#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Input lower limit:");
    scanf("%d",&a);
    printf("Input upper limit:");
    scanf("%d",&b);
    printf("Even numbers from %d to %d:\n",a,b);
    for(i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
