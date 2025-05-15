#include <stdio.h>
int main() {
    char name[10];
    printf("enter your name:");
    fgets(name,10,stdin);
    printf("your name is :%s",name);
}
