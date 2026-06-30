#include <stdio.h>

int main() 
{
    int num, temp, firstDigit, digits, divisor, result,i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    digits = 0;

    // Count number of digits
    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    divisor = 1;

    // Find divisor value
    for(i = 1; i < digits; i++)
    {
        divisor = divisor * 10;
    }

    // Extract first digit
    firstDigit = num / divisor;

    // Check whether first digit is odd
    if(firstDigit % 2 != 0)
    {
        result = num - divisor;
        printf("Output = %d", result);
    }
    else
    {
        printf("Output = %d", num);
    }

    return 0;
}
