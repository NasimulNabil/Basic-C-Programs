#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,average,percentage;
    printf("input five numbers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("total number=%d\n",total);
    average=(a+b+c+d+e)/5;
    printf("average number=%d\n",average);
    percentage=((a+b+c+d+e)*100)/500;
    printf("percentage of number=%d\n: ",percentage);
    return 0;
}
