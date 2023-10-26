// take two input from user and add two numbers

#include <stdio.h>

int main(void) 
{
    int binary, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    if(binary >= 100000)
    printf("Enter binary with maximun five digits.");
    else 
    {
        while (binary > 0) 
        {
        int digit = binary % 10; // Get the rightmost digit
        decimal += digit * base; // Multiply the digit by its positional value and add to the decimal
        binary /= 10; // Remove the rightmost digit
        base *= 2; // Update the positional value for the next digit
        }

    printf("Decimal equivalent: %lld\n", decimal);
    }
}