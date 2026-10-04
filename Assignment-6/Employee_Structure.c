#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employee;

    printf("Enter employee ID: ");
    scanf("%d", &employee.id);

    printf("Enter employee name: ");
    scanf(" %[^
]", employee.name);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\n", employee.id);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
