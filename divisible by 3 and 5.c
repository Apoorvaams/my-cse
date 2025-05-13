#include <stdio.h>
int main() {
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number % 3 == 0 && number % 5 == 0){
        printf("the number is divisible by both 3 and 5.\n");
    }
    else{
        printf("the number is not divisible by both 3 and 5.\n");
    }
}
