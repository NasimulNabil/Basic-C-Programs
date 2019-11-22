#include<stdio.h>
int main()
{
    int a[5]={1,2,1,4,3};
    int *p;
    p=a;
    printf("%x %x %x\n",p,(p+1),(p+2));
    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}
