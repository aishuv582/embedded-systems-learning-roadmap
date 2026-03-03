 /*
Program Name : program to print 2 digit even numbers and their sum is 6.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print 2 digit even numbers and their sum is 6
*/

 #include <stdio.h>         // header file

int main()                  //main function
{
    int x = 10;             //declared x and intialised as 10

loop:
    if(x <= 99)
    {
        if(x % 2 == 0 && (x/10 + x%10 == 6))        //condition for even number an sum is 6
        {
            printf("%d\n", x);
        }

        x++;
        goto loop;
    }

    return 0;
}
