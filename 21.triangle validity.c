#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Input first side:");
    scanf("%d",&side1);
    printf("Input second side:");
    scanf("%d",&side2);
    printf("input third side:");
    scanf("%d",&side3);
    if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2))
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
