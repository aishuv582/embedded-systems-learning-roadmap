 /*
Program Name : program to print 2 digit odd numbers and their sum is 7.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print 2 digit odd numbers and their sum is 7
*/

 #include <stdio.h>         // header file

int main()                  //main function
{
    int x = 10;             //declared x and intialised as 10

loop:
    if(x <= 99)
    {
        if(x % 2 != 0 && (x/10 + x%10 == 7))        //condition for odd number an sum is 7
        {
            printf("%d\n", x);
        }

        x++;
        goto loop;
    }

    return 0;
}
