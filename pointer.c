#include<stdio.h>
#include<conio.h>
 const int max=3;
int main()
{
   int var[]={10,100,200};
   int i,*ptr;
   ptr=&var[max-1];
   for(i=max;i>0;i--)
   {
       printf("address of var[%d]=%x\n",i,ptr);
       printf("value of var[%d]=%d\n",i,*ptr);
       ptr--;
   }
    return 0;
}
