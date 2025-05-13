#include<stdio.h>
int main()
{
    int marks;
    printf("enter student marks:");
    scanf("%d",&marks);
    if(marks>80){
        printf("distinction.\n");
    }
    else{
        printf("fail.\n");
    }
    return 0;
    }
