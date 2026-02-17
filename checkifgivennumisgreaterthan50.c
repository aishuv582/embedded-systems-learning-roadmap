/*
Program Name : checkifgivennumisgreaterthan50.c
Author       : Aishwarya V
Description  : Program about check if given num is greater than  50 
*/


#include<stdio.h>				//header file

int main()					//main function

{
	int x;						//declared variable x
	printf("Enter a number : ");			//getting a input from the user
	scanf("%d",&x);			
	if(x>50)						//logic for x>50  if x>50 print success otherwise print failure
	{
		printf("success");
	}
	else{
		printf("Failure");
	}
	
	return 0;
}
