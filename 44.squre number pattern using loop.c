#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("Input rows:");
    scanf("%d",&rows);
    printf("Input columns:");
    scanf("%d",&cols);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
