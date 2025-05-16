#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    float totalSalary = 0.0;
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / n;
    printf("\nAverage Salary of Employees: %.2f\n", averageSalary);
    return 0;
}
