/*
Program Name : checkifgivennumiseqqualto50ornot.c
Author       : Aishwarya V
Description  : Program about check if given num is equal to 50 or not 
*/


#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);			
	if(x==50)						//logic for x=50
	{
		printf("success");
	}
	else{
		printf("Failure");
	}
	
	return 0;
}
