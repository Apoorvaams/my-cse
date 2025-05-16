#include <stdio.h>
int i,num,isprime=1;
int main() {
    printf("enter the num");
    scanf("%d",&num);
    if(num<=1){
        printf("enter the number from 2");
    }
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("its not a prime\n");
        }
        else{
            printf("its a prime\n");
        }
    }

    return 0;
}
