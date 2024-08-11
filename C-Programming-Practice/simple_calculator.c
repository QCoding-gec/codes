#include <stdio.h> // Preprocessor directive to include the standard input-output header file

int main()
{
    char operator;             // Variable to store the operator (+, -, *, /)
    double num1, num2, result; // Variables to store the two numbers and the result

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator); // Read the operator input by the user

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // Read the two numbers input by the user

    // Perform the operation based on the operator input
    switch (operator)
    {
    case '+':
        result = num1 + num2; // Addition
        break;
    case '-':
        result = num1 - num2; // Subtraction
        break;
    case '*':
        result = num1 * num2; // Multiplication
        break;
    case '/':
        result = num1 / num2; // Division
        break;
    default:
        printf("Error! Operator is not correct\n"); // Error message for invalid operator
        return 1;                                   // Return 1 to indicate an error
    }

    // Display the result of the operation
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0; // Return 0 to indicate the program ended successfully
}
