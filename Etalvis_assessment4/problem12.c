 /*
Program Name : loop program to rite a program to get a number from user and print the reverse of that number.
Author       : Aishwarya V
problemstatement  : Write a program to get a number from user and print the reverse of that number.
*/

#include <stdio.h>				//header file

int main() 					//main function
{
  
    
    int x,rev=0;
    printf("Enter a number");
    scanf("%d",&x);
    loop:
    if(x>0)
    
    {
        rev=rev*10+x%10;
        x=x/10;
        					//logic for reversing given input
        goto loop;
    }
    printf("rev=%d",rev);
return 0;

}
