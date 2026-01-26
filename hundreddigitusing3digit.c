/*
Program Name : hundreddigitusing3digit.c
Author       : Aishwarya V
Description  : Program about printing hundredth's digit in a given 3 digit number
*/
#include<stdio.h>

int main()

{
	int x;
	printf("Enter a three digit no: ");		//get a three digit number from user
	scanf("%d",&x);
	if(x>=100 && x<=999)						//condition for a three digit number
	{ 
	

	printf("Hundred's digit = %d", x/100);			//print hundredth digit
	
	}
	else
{
		
    
        printf("Please enter a valid three-digit number");			//other 3 digit no any digit more than 3 print no as invalid
    
	}
	
	return 0;
}
