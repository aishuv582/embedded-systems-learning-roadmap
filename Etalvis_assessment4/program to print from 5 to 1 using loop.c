/*
Program Name : program to print from 5 to 1 using loop.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print 5 to 1 one by one.

*/

#include <stdio.h>          //header file

int main()              //main function
{
    int i = 5;  //declaring i variable and initialising i as 5

    loop:
    if(i >= 1)    //loop condition to print from 5 to 1
    {
        printf("%d\n", i);
        i--;
        goto loop;
    }

    return 0;
}
