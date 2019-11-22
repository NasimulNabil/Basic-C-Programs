#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b&&a<c)||(b<a&&a>c))
    {
        printf("%d",a);
    }
    else if((b>a&&b<c)||(b<a&&a<c))
    {
        printf("%d",b);
    }
    else if((c>a&&c<b)||(c<a&&c>b))
    {
        printf("%d",c);
    }

    return 0;
}
