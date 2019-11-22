#include<stdio.h>
int main()
{
    int num,n;
    int i,lastdigit;
    int freq[10];
    printf("Input any number:");
    scanf("%d",&num);
    for(i=0; i<10; i++)
    {
        freq[i]=0;
    }
    n=num;
    while(n!=0)
    {
        lastdigit=n%10;
        n=n/10;
        freq[lastdigit]++;
    }
    printf("Frequency of each digit in %d is:\n",num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n",i,freq[i]);
    }
    return 0;
}
