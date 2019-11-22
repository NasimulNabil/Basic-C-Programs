#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("the number is positive",a);
    }
    else if(a<0)
    {
        printf("the number is negative",a);
    }
    return 0;
}
