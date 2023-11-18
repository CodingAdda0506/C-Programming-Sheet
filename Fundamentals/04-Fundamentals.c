// Program to Calculate Simple Interest
#include <stdio.h>
#include <conio.h>

// Function to calculate simple interest
void main()
{
    // Declare variables
    int principal, numberOfYears;
    float rateOfInterest, simpleInterest;

    // Input principal amount
    printf("Enter the Principal: ");
    scanf("%d", &principal);

    // Input rate of interest
    printf("Enter the Rate of Interest: ");
    scanf("%f", &rateOfInterest);

    // Input number of years
    printf("Enter the Number of Years: ");
    scanf("%d", &numberOfYears);

    // Calculate simple interest
    simpleInterest = principal * rateOfInterest * numberOfYears / 100;

    // Display the calculated simple interest
    printf("Simple Interest: %f", simpleInterest);
}
