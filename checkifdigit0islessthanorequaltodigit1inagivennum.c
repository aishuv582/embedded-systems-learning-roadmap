/*
Program Name : checkifdigit0islessthanorequaltodigit1inagivennum.c
Author       : Aishwarya V
Description  : Program about check if digit 0  is less than or equal to digit 1 in the given num 
*/


#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);			
	if(x/10<=x%10)			//logic for   if digit 0 is less than or equal to  digit 1 print success otherwise print failure
	{
		printf("success");
	}
	else{
		printf("Failure");
	}
	
	return 0;
}
