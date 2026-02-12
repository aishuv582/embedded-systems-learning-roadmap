/*
Program Name : checkifdigitlessthanorequaltodigit1ina2digitnum.c
Author       : Aishwarya V
Description  : Program about check if digit 0 less than or equal to digit 1 are not 
*/

#include<stdio.h>		//header file

int main()					//main function

{
	int x;					//declared variable x
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("%d",(x/10<=x%10));		//checkifdigitlessthanorequaltodigit1ina2digitnum
	return 0;
}
