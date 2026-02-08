/*
Program Name : sumofdigitin2digit.c
Author       : Aishwarya V
Description  : Program about sumofdigitin2digit
*/
#include<stdio.h>			//header file

int main()						//main function	

{
	int x,first,last,sum;			//declared variables
	printf("Enter a num : ");			//getting a input from the user
	scanf("%d",&x);					//scan the function
	if(x>=10&&x<=99)				//condition for 2 digit num
	{
	    first= x / 10;
        last  = x % 10;



sum = first+last;			//logic for sum 

	
		printf("sum of a num: %d",sum);			//print sum
	}
	else
	{
		printf("Enter a valid input:");				//print valid input other than two digit num given as input
	}
	return 0;
}
