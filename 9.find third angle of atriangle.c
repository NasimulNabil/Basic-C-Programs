#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first angle:");
    scanf("%d",&a);
    printf("enter the second angle: ");
    scanf("%d",&b);
    c=180-(a+b);
    printf("third angle=%d",c);
    return 0;
}
