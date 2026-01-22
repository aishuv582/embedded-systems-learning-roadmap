/*
Program Name : subtract.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/


#include<stdio.h>     //header file

int main()
{
	int x; 				//declared variable x;
	
	printf("Enter a number: ");    //getting input from the user
	
	scanf("%d",&x);     
	
	
	x=x-5;						//subtract the input from 5
	printf("Result=%d",x);
	
	return 0;
}
