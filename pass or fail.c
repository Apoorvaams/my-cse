#include<stdio.h>
int main()
{
    int marks;
    printf("enter student marks:");
    scanf("%d",&marks);
    if(marks>=40){
        printf("student passed.\n");
    }
    else{
        printf("student failed.\n");
    }
    return 0;
    }
