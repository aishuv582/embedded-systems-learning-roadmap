/*
Program Name : program to print 2 digit odd numbers below 20.c
Author       : Aishwarya V
problemstatement  : Write a loop program to program to print 2 digit odd numbers below 20
*/

#include <stdio.h>

int main ()
{
    int x = 11;          //decalred x and initialised variable as 1

loop:
    if(x <=20)              //condition for below 20
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
