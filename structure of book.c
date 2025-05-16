#include <stdio.h>
struct books{
    char name[20];
    int edition;
    char genre[20];
    char author[20];
};
int main()
{
    int i;
    struct books b[20];
    for(i=0;i<5;i++)
    {
        printf("enter details for book %d\n",i+1);
        printf("enter book name:");
        scanf("%s",&b[i].name);
        printf("enter author of book:");
        scanf("%s",&b[i].author);
        printf("enter the edition:");
        scanf("%d",&b[i].edition);
        printf("enter the genre:");
        scanf("%s",&b[i].genre);
    printf("book details\n");
    printf("%-20s %-15s %-10s %-15s\n","book name","author","edition","genre/type");
    for(i=0;i<5;i++)
    {
        printf("%-20s %-15s %-10d %-15s\n",b[i].name,b[i].author,b[i].edition,b[i].genre);
    }
    return 0;
}
    
    
