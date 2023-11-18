// Program to Calculate Gross Salary
#include <stdio.h>

int main() {
    // Declare variables
    float basicSalary, grossSalary, da, hra;

    // Input basic salary from the user
    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    // Calculate Dearness Allowance (DA) and House Rent Allowance (HRA)
    da = 0.5 * basicSalary;
    hra = 0.4 * basicSalary;

    // Calculate Gross Salary
    grossSalary = basicSalary + da + hra;

    // Display the calculated Gross Salary
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
