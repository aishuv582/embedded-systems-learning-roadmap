/*
Program Name : multiply.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/


#include<stdio.h>

int main()


{
	int x;				//declare variable x
	
	printf("Enter a number: ");    			//getting input from the user 

	scanf("%d",&x);
	
	x=x*3;						//mutiplying the user input with 3
	
	printf("Result=%d",x);			
	
	return 0;
}


