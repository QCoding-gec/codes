#include <stdio.h> // Preprocessor directive to include the standard input-output header file

int main()
{
    int n, reversed = 0, remainder, original; // Variables to store the number, reversed number, remainder, and original number

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n); // Read the integer input by the user

    original = n; // Store the original number for comparison later

    // Reverse the digits of the number
    while (n != 0)
    {
        remainder = n % 10;                   // Get the last digit of the number
        reversed = reversed * 10 + remainder; // Append the last digit to the reversed number
        n /= 10;                              // Remove the last digit from the number
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed)
        printf("%d is a palindrome.\n", original); // Number is a palindrome
    else
        printf("%d is not a palindrome.\n", original); // Number is not a palindrome

    return 0; // Return 0 to indicate the program ended successfully
}
