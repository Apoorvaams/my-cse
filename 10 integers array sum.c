#include <stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("enter 10 elements to array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of all array elements is:%d",sum);
}
