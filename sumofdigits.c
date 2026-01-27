/*
Program Name : sum of digits using 3digit num.c
Author       : Aishwarya V
Description  : Program about sum of digits using 3digit num
*/


	#include<stdio.h>			//header file


int main()
{
	int x,sum=0;					//declared variables x,sum and initialised sum to zero
	printf("Enter a number:");			///asking user to enter a number
	scanf("%d",&x);
	
	if(x>=100&&x<=999)				//checks the condition for 3 digit num
	{
		sum=(x%10)+(x/10)%10+(x/100);				//sum of digit s condition
		printf("Sum of the digits=%d",sum);			//prints sum of the digits
		
	
	}
	else
	{
		printf("Enter a valid 3 digit no:");
	}
	return 0;
}
