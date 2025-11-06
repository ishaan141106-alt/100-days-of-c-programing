//Write a program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swap the numbers without using a third variable
    num1 = num1 + num2; // Step 1: Add both numbers and store in num1
    num2 = num1 - num2; // Step 2: Subtract new num2 from num1 to get original num1
    num1 = num1 - num2; // Step 3: Subtract new num2 from new num1 to get original num2

    // Display the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}