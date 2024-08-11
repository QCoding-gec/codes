#include <stdio.h> // Preprocessor directive to include the standard input-output header file

int main()
{
    int n, i;                         // Variables to store the number and loop counter
    unsigned long long factorial = 1; // Variable to store the factorial (use unsigned long long to handle large results)

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n); // Read the integer input by the user

    // Check if the number is negative
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n"); // Error message for negative input
    else
    {
        // Calculate the factorial using a for loop
        for (i = 1; i <= n; ++i)
        {
            factorial *= i; // Multiply factorial by the current loop counter
        }
        // Display the calculated factorial
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0; // Return 0 to indicate the program ended successfully
}
