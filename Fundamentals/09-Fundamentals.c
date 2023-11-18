// Program to convert temperature from Fahrenheit to Celsius
#include <stdio.h>

void main()
{
    // Declare variables
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit from the user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Call the conversion function
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the converted temperature in Celsius
    printf("Temperature in Celsius: %.2f", celsius);
}
