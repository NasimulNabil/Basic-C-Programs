#include<stdio.h>
int main()
{
    int rad,diameter;
    float PI=3.14,area,ci;
    printf("\nEnter radius: ");
    scanf("%d",&rad);
    diameter=rad*2;
    printf("Diameter=%d units",diameter);
    area=PI*rad*rad;
    printf("\nArea=%f sq.units",area);
    ci=2*PI*rad;
    printf("\nCircumference:%f units",ci);
    return 0;
}
