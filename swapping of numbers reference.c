#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p1=&a;
    int *p2=&b;
    printf("before swap:a=%d,b=%d\n",a,b);
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swap :a=%d,b=%d",a,b);
}
