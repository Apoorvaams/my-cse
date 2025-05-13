#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
        if (a<=b&& a <= c){
            printf("smallest number is:%d\n,a");
        }
        else if(b<=a&& b<=c){
            printf("smallest number is:\n,b");
        }
        else{
            printf("smallest number is:%d\n",c);
        }
        }
        
