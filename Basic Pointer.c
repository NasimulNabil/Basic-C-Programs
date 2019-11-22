#include<stdio.h>
const int max=3;
int main()
{
    int var[]={10,100,200};
    int i,*ptr[max];
    for(i=0;i<max;i++)
    {
        ptr[i]=&var[i];
    }
    for(i=0;i<max;i++)
    {
        printf("value of var[%d]=%d\n",i,*ptr[i]);
    }
    return 0;
}
