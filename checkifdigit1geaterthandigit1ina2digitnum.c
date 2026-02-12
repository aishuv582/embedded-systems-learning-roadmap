/*
Program Name : checkifdigit1geaterthandigit1ina2digitnum.c
Author       : Aishwarya V
Description  : Program about check if digit 0 greater than digit 1 are not 
*/

#include<stdio.h>		//header file

int main()					//main function

{
	int x;					//declared variable x
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("%d",(x%10>x/10));		//checkifdigit1greaterthandigit1ina2digitnum
	return 0;
}
