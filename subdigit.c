/*
Program Name : subwithoutifstatement.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/






#include<stdio.h>			//header file

int main()			//main function			


{
	int x;				//declared variable x
	printf("Enter a number");		//get a input from user
	scanf("%d",&x);				
	
	{
		x=x-(x%2)*5;		// logic for subtract from 5 if x is odd,if it is even return the same input 
		printf("x=%d",x);
	}
	
    return 0;
}
