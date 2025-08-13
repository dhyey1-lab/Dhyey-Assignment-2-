#include <stdio.h>
int main() {
    double gross_salary, allowances, deductions, net_salary;

    printf("Enter gross salary: ");
    scanf("%lf", &gross_salary);

    if (gross_salary > 10000) {
        allowances = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
    } else if (gross_salary > 5000) {
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    } else {
        allowances = 0.0;
        deductions = 0.0;
    }

    net_salary = gross_salary + allowances - deductions;

    printf("Net Salary: %.2lf\n", net_salary);
    return 0;
}
