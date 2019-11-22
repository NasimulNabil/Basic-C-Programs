#include<stdio.h>
const int max=3;
int main()
{
   int var[]={10,100,200};
   int i,*ptr;
   ptr=var;
   i=0;
   while(ptr<=&var[max-1])
   {
       printf("address of var[%d]=%x\n",i,ptr);
       printf("value of var[%d]=%d\n",i,*ptr);
       ptr++;
       i++;
   }
   return 0;
}
