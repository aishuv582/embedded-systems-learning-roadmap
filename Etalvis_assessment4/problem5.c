/*
Program Name : program to print odd number from 1 to 9 using loop.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print odd number from 1 to 9 o.
*/

#include <stdio.h>

int main ()
{
    int x = 0;          //decalred x and initialised variable as 0

loop:
    if(x <= 9)              //condition for 1 to 9
    {
        if(x % 2 != 0)              //condition for odd number
        {
            printf("\n %d ", x);
        }
        x++;
        goto loop;
    }

    return 0;
}
