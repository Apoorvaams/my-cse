#include <stdio.h>
struct address {
    char city[50];
    int pin;
};
    struct employee {
    char name[50];
    int id;
    float salary;
    struct address addr; 
};
int main() {
    struct employee emp;
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("Enter city: ");
    scanf(" %[^\n]", emp.addr.city);
    printf("Enter PIN code: ");
    scanf("%d", &emp.addr.pin);
    printf("\n--- Employee Details ---\n");
    printf("Name  : %s\n", emp.name);
    printf("ID    : %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("City  : %s\n", emp.addr.city);
    printf("PIN   : %d\n", emp.addr.pin);
    return 0;
}
