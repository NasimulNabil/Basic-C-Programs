#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,modulus,quotient;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    modulus=a%b;
    printf("sum=%d \ndifference=%d \nproduct=%d \nquotient=%d \nmodulus=%d",sum,difference,product,quotient,modulus);

    return 0;
}
