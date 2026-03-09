 /*
Program Name : loop program to Write a program to get a number from the user and if the last digit of the number is even print the same number. If the last digit of the number is odd, subtract 1 from the MSB (most significant digit) and print the number
Author       : Aishwarya V
problemstatement  : Write a program to get a number from the user and if the last digit of the number is even print the same number. If the last digit of the number is odd, subtract 1 from the MSB (most significant digit) and print the number
*/

#include <stdio.h>

int main()
{
    int x,temp,p=1,msb;

    printf("Enter number: ");
    scanf("%d",&x);

    if((x%10)%2==0)
    {
        printf("x=%d",x);
    }

    else
    {
        temp=x;

loop:
        if(temp>9)
        {
            temp=temp/10;
            p=p*10;
            goto loop;
        }

        msb=temp;

        x = x - (msb*p);   // remove MSB
        msb = msb - 1;     // subtract 1 from MSB
        x = x + (msb*p);   // add new MSB

        printf("x=%d",x);
    }

    return 0;
}
