#include<ctype.h>
#include<stdio.h>
int main()
{
    char str[80],*p;
    printf("enter a string: ");
    gets(str);
    p=str;
    while(*p)
    {
        *p=toupper(*p);
        p++;
    }
    printf("%s\n",str);
    p=str;
    while(*p)
    {
        *p=tolower(*p);
        p++;
    }
    printf("%s\n",str);
    return 0;
}

