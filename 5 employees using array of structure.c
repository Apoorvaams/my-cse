#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employee emp[5]; 
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); 
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name  : %s\n", emp[i].name);
        printf("ID    : %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }
    return 0;
}

