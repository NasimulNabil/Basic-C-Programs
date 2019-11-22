#include<stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;
    var=300;
    ptr=&var;
    pptr=&ptr;
    printf("the value of var:%d\n",var);
    printf("the value of *ptr=%d\n",*ptr);
    printf("the value of **pptr=%d\n",**pptr);
    return 0;
}
