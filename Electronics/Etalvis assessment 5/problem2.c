 /*
Program Name : program  to print 5 to 1 one by one using for loop.

Author       : Aishwarya V
problemstatement  : Write a loop program to print 5 to 1 one by one.

*/


#include <stdio.h>            // header file

int main()
{
    int i;

    loop:
    for (i = 5; i >= 1; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}


