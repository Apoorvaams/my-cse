#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number (a):");
    scanf("%d",&a);
    printf("enter the second number (b):");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
