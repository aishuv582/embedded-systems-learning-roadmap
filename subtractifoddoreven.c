/*
Program Name : subtractifoddoreven.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/


#include <stdio.h>

int main()
{
    int n, tens, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    tens = (n / 10) % 10;          // extract ten's digit
    result = n - (tens % 2) * 5;  // subtract 5 only if ten's digit is odd

    printf("Result = %d", result);

    return 0;
}

