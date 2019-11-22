#include<stdio.h>
int main()
{
    float arr[100];
    int i,n;
    float sum=0;
    printf("size:");
    scanf("%d",&n);
    printf("enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
     printf("\nelements in the array are: ");
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        printf("sum= %f",sum);
    return 0;
}
