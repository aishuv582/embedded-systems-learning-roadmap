/*
Program Name : arith.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/


#include<stdio.h>        //header file

int main()                /

{
	int x,y;         //declared variables x,y
	
	printf("Enter a number : ");     //asking user to enter a number
	
	scanf("d",&x);           	// Reading input from user
	y=(x+2)-5*9/3%4;        // y performs the functions 
	
	
	printf("Result=",y)     // Displaying  the result 
	return 0;
}
