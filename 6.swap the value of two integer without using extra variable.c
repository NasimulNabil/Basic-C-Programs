#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first value: ");
    scanf("%d",&a);
    printf("enter the second value: ");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("the first value is %d\n",a);
    printf("the second value is %d\n",b);
    return 0;

}
