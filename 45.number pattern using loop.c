#include<stdio.h>
int main()
{
    int i,j,k,rows,cols;
    printf("Input rows:");
    scanf("%d",&rows);
    printf("Input columns:");
    scanf("%d",&cols);
    k=1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
