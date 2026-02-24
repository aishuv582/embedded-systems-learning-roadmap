/*
Program Name : checkif1st2digitandlast2digitinagivennum.c
Author       : Aishwarya V
problemstatement  : Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print “Success”; otherwise, print “Failure”.
*/
#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);	
	if(x>=1000&&x<=9999)
	{
	if((x/100)==x%100)			//logic for   check  if 1st 2digit and last 2 digit in a given num
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
