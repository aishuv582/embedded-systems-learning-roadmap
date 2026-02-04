/*
Program Name : sumofdigitsifoddoreven.c
Author       : Aishwarya V
Description  : Program about sumofdigitsifoddoreven
*/
#include<stdio.h>

int main()
{
    int x;

    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    /* runs only for 2-digit numbers AND odd digit-sum */
    while (x >= 10 && x <= 99 && ((x % 10 + x / 10) % 2 != 0))
    {
        x = x - 5;
    }

    printf("%d", x);
    return 0;
}


