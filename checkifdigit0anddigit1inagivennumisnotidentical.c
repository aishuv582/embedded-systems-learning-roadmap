/*
Program Name : checkifdigit0anddigit1inagivennumisnotidentical.c
Author       : Aishwarya V
Description  : Program about check if digit 0 and digit 1 in the given num is identical or not 
*/


#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);			
	if(x%10!=x/10)			//logic for x=2digit num  if digit 0 and digit 1 are not same print failure otherwise print success
	{
		printf("success");
	}
	else{
		printf("Failure");
	}
	
	return 0;
}
