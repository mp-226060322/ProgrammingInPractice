#include <stdio.h>
#include <string.h>

int main() {
    printf("===================================\n");
    printf(" MUNCIPAL BUDGET CALCULATOR\n");
    printf("===================================\n");

    double revenue, expenses, balance;

    int departments;
    double payroll, procurement, assets;
    char municipalityName[50];

    printf("Enter Municipality Name: ");
    scanf("%49s", municipalityName);

    printf("Enter  Total Revenue: ");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    printf("Enter Number of Departments: ");
    scanf("%d", &departments);

    printf("Enter Total Payroll Amount: ");
    scanf("%lf", &payroll);

    printf("Enter Total Procurement Amount: ");
    scanf("%lf", &procurement);

    printf("Enter Total Asset Value: ");
    scanf("%lf", &assets);

    balance = revenue - expenses;

    printf("====================================\n");
    printf(" MUNCIPAL BUDGET SUMMARY\n");
    printf("====================================\n");

    printf("Municipality Name: %s\n", municipalityName);
    printf("Total Revenue: %.2lf\n", revenue);
    printf("Total Expenses: %.2lf\n", expenses);
    printf("Total Payroll: %.2lf\n", payroll);
    printf("Total Procurement: %.2lf\n", procurement);
    printf("Total Asset Value: %.2lf\n", assets);
    printf("------------------------------------\n");
    printf("Balance: %.2lf\n", balance);
    printf("------------------------------------\n");

    return 0;
}