
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("Absolute of %d is %d",num,num);
    }
    else
    {
        printf("Absolute of %d is %d",num,-num);
    }
    return 0;
}
