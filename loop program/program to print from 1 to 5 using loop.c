/*
Program Name : program to print from 1 to 5 using loop.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print 1 to 5 one by one.

*/

#include <stdio.h>          //header file

int main()              //main function
{
    int i = 1;  //declaring i variable and initialising i as 1

    loop:
    if(i <= 5)    //loop condition to print from 1 to 5
    {
        printf("%d\n", i);
        i++;
        goto loop;
    }

    return 0;
}
