/*
Program Name : checkifgivennumequalsto50ornot.c
Author       : Aishwarya V
Description  : Program about checkifgivennumequalsto50ornot
*/
#include<stdio.h>			//header file

int main()					//main function

{
	int x;					//declared x
	printf("Enter a num : ");			//getting a user input
	scanf("%d",&x);
	if(x==50)					//condition for num==50
	{
		printf("1");
		
	}
	else{
		printf("0");
	}
	return 0;
}
