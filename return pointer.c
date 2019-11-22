#include<stdio.h>
double getAverage(int *arr,int size);
int main()
{
 int balance[]={10,20,30,40,50};
 double avg;
 avg=getAverage(balance,5);
 printf("average value is %f\n",avg);
 return 0;
}
double getAverage (int*arr,int size)
{
    int i,sum=0;
    double avg;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/size;
    return avg;
}
