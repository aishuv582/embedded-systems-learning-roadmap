 /*
Program Name : loop program to rite a program to get a number from user and print the reverse of that number.
Author       : Aishwarya V
problemstatement  : Write a program to get a number from user and interchange the first and last digits and print the result..
*/

#include<stdio.h>

int main()
{
    int x,first,last,middle,interchange;

    printf("Enter number: ");
    scanf("%d",&x);

loop: if(x < 100)   // 2 digit
{
    first = x / 10;
    last = x % 10;

    interchange = last*10 + first;

    printf("%d",interchange);
}
else if(x < 1000)   // 3 digit
{
    first = x / 100;
    middle = (x % 100) / 10;
    last = x % 10;

    interchange = last*100 + middle*10 + first;

    printf("%d",interchange);
}
else if(x < 10000)  // 4 digit
{
    first = x / 1000;
    middle = (x % 1000) / 10;
    last = x % 10;

    interchange = last*1000 + middle*10 + first;

    printf("%d",interchange);
}
else
{
    printf("Number not supported");
}
return 0;
}
