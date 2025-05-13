#include <stdio.h>
int main() {
    printf("enter an alphabet: ");
    scanf(" %c", &ch);
    if((ch >='A' && ch <= 'Z')||(ch >='a' && ch <='z')){
        char lower=(ch>='A' && ch <='z')? ch + 32 : ch;
        if (lower == 'a'|| lower=='e'|| lower=='i'||lower=='o'|| lower =='u'){
            printf("%c is a vowel.\n",ch);
        }
        else{
            printf("%c is a consonant.\n",ch);
        }
       } else{
            printf("invalid input.please enter an alphabet.\n");
        }
        return 0;
    }

    
