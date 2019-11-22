#include<stdio.h>
int main()
{
    int i,n,sum=0,numbers;
    float average;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d",&numbers);
        sum = sum+numbers;
    }
    average = sum/n;
    printf("Average:%.2f",average);
    return 0;
}
