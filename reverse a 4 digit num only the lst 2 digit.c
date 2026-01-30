/*
Program Name : reverse of a 1st 2 digit num.c
Author       : Aishwarya V
Description  : Program about reverse of a 1st 2 digit num */

#include <stdio.h>				//header file

int main()
{
    int x, firstTwo, third, fourth, result;		//declaring variables

    printf("Enter a 4-digit number: ");
    scanf("%d", &x);

    if (x >= 1000 && x <= 9999)
    {
        firstTwo = x / 100;        // AB
        third    = (x / 10) % 10;  // C
        fourth   = x % 10;         // D

        result = firstTwo * 100 + fourth * 10 + third;

        printf("Result = %d", result);			//printing results
    }
    else
    {
        printf("Enter a valid 4-digit number");
    }

    return 0;
}

