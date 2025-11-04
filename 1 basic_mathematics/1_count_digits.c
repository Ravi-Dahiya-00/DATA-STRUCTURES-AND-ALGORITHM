// Problem Statement:
// Given an integer 'n', the task is to count the number of digits in the given number.
// The program will repeatedly divide the number by 10, counting how many times the division can be performed until the number becomes 0.

#include <stdio.h>

int main()
{
    // Declare the variable to store the input number.
    int n;
    
    // Take input from the user.
    scanf("%d", &n);
    
    // Initialize the count variable to 0.
    int count = 0;
    
    // Use a while loop to divide the number by 10 until it becomes 0.
    while (n > 0)
    {
        // Divide the number by 10 and update the value of n.
        n /= 10;
        
        // Increment the count for each division (each digit).
        count++;
    }

    // Output the total count of digits.
    printf("No of digits in given number are : %d", count);

    return 0;
}
