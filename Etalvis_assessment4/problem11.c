 /*
Program Name : loop program to Write a program to get a number from the user and print the sum of all digits
Author       : Aishwarya V
problemstatement  : Write a program to get a number from the user and print the sum of all digits
*/

#include <stdio.h>				//header file

int main() 					//main function
{
  
    
    int x,sum=0;
    printf("Enter a number");
    scanf("%d",&x);
    loop:
    if(x>0)
    
    {
        sum=sum+x%10;
        x=x/10;
        					//logic for sum of digit
        goto loop;
    }
    printf("sum=%d",sum);
return 0;

}
