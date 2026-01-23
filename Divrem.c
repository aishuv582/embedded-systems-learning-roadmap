/*
Program Name : Divrem.c
Author       : Aishwarya V
Description  : Program about arithmetic operations
*/




#include<stdio.h>				//header file

int main ()			

{
	int x,Rem;						//declared variables x
	printf("Enter a number: ");
	scanf("%d",&x);
	x=x%8;							//print the remainder
							
	printf("Remainder=%d",x);
	
	return 0;
}
