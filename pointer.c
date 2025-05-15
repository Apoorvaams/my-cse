#include<stdio.h>
int main()
{
    int a=3;
    int *ptr=&a;
    printf("value of pointer:%d\n",a);
    *ptr=5;
    printf("new of x:%d",a);
}
