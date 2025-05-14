#include<stdio.h>
int main(){
int i,j,a=1,marks[3][3];
printf("enter the marks of the student:");
for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     scanf("%d",&marks[i][j]);
for(i=0;i<3;i++)
{
    printf("\nmarks of student %d is :",a);
    for(j=0;j<3;j++)
     printf("%4d",marks[i][j]);
     a=a+1;
  }
}

