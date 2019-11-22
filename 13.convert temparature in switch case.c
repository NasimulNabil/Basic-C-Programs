#include<stdio.h>
int main()
{
    float c,f;
    char ch;
    printf("Enter character(C or F):");
    scanf("%c",&ch);
    switch(ch)
    {
    case'C':
        printf("Enter temperature in Celsius: ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("Temperature in Fahrenheit: %.2fF",f);
        break;
    case 'F':
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&f);
        c=((f-32)/9)*5;
        printf("Temperature in Celsius: %.2fC",c);
        break;
    default:
        printf("Invalid character.");
    }
    return 0;
}
