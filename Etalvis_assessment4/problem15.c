 /*
Program Name : loop program to Write a program to get a number from the user and print whether that number is prime or not.
Author       : Aishwarya V
problemstatement  : Write a program to get a number from the user and print whether that number is prime or not.
*/

#include <stdio.h>

int main()
{
    int x,i=2;

    printf("Enter a number: ");
    scanf("%d",&x);

loop:
    if(i < x)
    {
        if(x % i == 0)
        {
            printf("x is not a prime number");
            return 0;
        }
        i++;
        goto loop;
    }

    printf("x is a prime number");

    return 0;
}

