/*
Program Name : arith.c
Author       : Aishwarya V
Description  : Program about getting a number from the user and add 2 to that number*/




#include<stdio.h>    // HEADER FILE

int main()

{
	    int x;    		// DECLARED VARIABLE X
	
	printf("Enter x ");	//GETTING AN INPUT FROM THE USER
	
	scanf("%d",&x);
	
	x=x+2;						//ADDING +2 WITH THE INPUT 
	
	printf("%d",x);
	
	return 0;
	
	
}


