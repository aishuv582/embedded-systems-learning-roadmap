/*
Program Name : Sum of digits until single digit.c
Author       : Aishwarya V
Description  : Program about Sum of digits until single digit
*/

#include<stdio.h>			//header file

int main()					//main function
{
    int x, firstsum, secondsum;		//declaring variables

    printf("Enter a num: ");
    scanf("%d", &x);

    if(x >= 100 && x <= 999)		//condition for 3 digit num
    {
        firstsum = x/100 + (x/10)%10 + x%10;		//logic for sum of digits

        if(firstsum < 10)
        {
            printf("sum=%d", firstsum);
        }
        else
        {
            secondsum = firstsum/10 + firstsum%10;

            if(secondsum < 10)
                printf("sum=%d", secondsum);
            else
                printf("sum=%d", secondsum/10 + secondsum%10);
        }
    }
    else
    {
        printf("Enter a valid input");
    }

    return 0;
}

