#include <stdio.h> // Preprocessor directive to include the standard input-output header file

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0; // Variables to store the number of terms and the Fibonacci sequence terms

    // Prompt the user to enter the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n); // Read the number of terms input by the user

    // Display the first two terms of the Fibonacci series
    printf("Fibonacci Series: %d, %d", t1, t2);

    // Generate the Fibonacci series up to the specified number of terms
    for (int i = 1; i <= n - 2; ++i)
    {
        nextTerm = t1 + t2;       // Calculate the next term
        printf(", %d", nextTerm); // Print the next term
        t1 = t2;                  // Update t1 to the previous t2
        t2 = nextTerm;            // Update t2 to the current nextTerm
    }
    printf("\n"); // Move to the next line after the series is printed

    return 0; // Return 0 to indicate the program ended successfully
}
