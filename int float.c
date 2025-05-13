#include<stdio.h>
int main()
{
    int intvalue;
    float floatvalue;
    printf("enter an integer:");
    scanf("%d",&intvalue);
    printf("enter a float:");
    scanf("%f",&floatvalue);
    printf("you entered the integer:%d\n",intvalue);
    printf("you entered the float:%.2f\n",floatvalue);
}
