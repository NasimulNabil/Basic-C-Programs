#include<stdio.h>
int main()
{
    int a[100],b[100],size;
    int i,j;
    printf("enter size:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=size-1,j=0;i>=0,j<size;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
