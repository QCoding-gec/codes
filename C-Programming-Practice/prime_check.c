#include <stdio.h> // Preprocessor directive to include the standard input-output header file

int main()
{
    int n, i, flag = 0; // Variables to store the number, loop counter, and a flag for checking primality

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read the integer input by the user

    // Check if the number is 0 or 1, which are not prime
    if (n == 0 || n == 1)
    {
        flag = 1; // Set flag to indicate the number is not prime
    }
    else
    {
        // Loop from 2 to n/2 to check if the number is divisible by any number other than 1 and itself
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                flag = 1; // Set flag if the number is divisible by i
                break;    // Break the loop as the number is not prime
            }
        }
    }

    // Display whether the number is prime or not
    if (flag == 0)
        printf("%d is a prime number.\n", n); // Number is prime
    else
        printf("%d is not a prime number.\n", n); // Number is not prime

    return 0; // Return 0 to indicate the program ended successfully
}
