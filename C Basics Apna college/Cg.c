#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate average
    average = (num1 + num2 + num3) / 3;

    // Display the result
    printf("Average of %f, %f, and %f is: %f\n", num1, num2, num3, average);

    return 0;
}
