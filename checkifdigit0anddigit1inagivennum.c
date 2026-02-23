/*
Program Name : checkifdigit0anddigit1inagivennum.c
Author       : Aishwarya V
problemstatement  : Get a three-digit number from the user and check if digit 1 and digit 0 are the same and 
if digit 1 and digit 0 are different. If yes, print “Success”; otherwise, print “Failure”.
*/
#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);	
	if(x>=100&&x<=999)
	{if((x/10%10)==x%10)			//logic for   check if digit0 and digit1 in a given num print success otherwise print failure
	{
		printf("success");
	}
	else
	{
		printf("Failure");
	}
	
	}		
	
	
	return 0;
}
