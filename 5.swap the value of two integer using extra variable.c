#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the first number is %d\n",a);
    printf("the second number is %d\n",b);
    return 0;
}
