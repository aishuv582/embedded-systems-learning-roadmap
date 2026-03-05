 /*
Program Name : loop program to get a number from the user and print the total number of digits in that number
Author       : Aishwarya V
problemstatement  : Write a program to get a number from the user and print the total number of digits in that number
*/

#include <stdio.h>				//header file

int main() 					//main function
{
  
    
    int x,count=0;
    printf("Enter a number");
    scanf("%d",&x);
    loop:
    if(x>0)
    
    {
        x=x/10;
        count++;					//logic to print no of digits
        goto loop;
    }
    printf("count=%d",count);
return 0;

}
