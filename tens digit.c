/*
Program Name : tensdigit.c
Author       : Aishwarya V
Description  : Program about printing ten's digit in a given 2 digit number
*/
#include<stdio.h>

int main()

{
	int x;
	printf("Enter a two digit no: ");		//get a two digit number from user
	scanf("%d",&x);
	if(x>=10 && x<=99)						//condition for a two digit number
	{ 
	

	printf("Ten's digit = %d", x/10);			//print tens digit
	
	}
	else
{
		
    
        printf("Please enter a valid two-digit number");			//other 2 digit no any digit more than 2 print no as invalid
    
	}
	
	return 0;
}
