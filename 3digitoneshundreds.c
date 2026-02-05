/*
Program Name : 3digitoneshundreds.c
Author       : Aishwarya V
Description  : Program about Subtract 5 from a 3-digit number if the one’s and hundred’s digits are odd (without using if)
*/
#include<stdio.h>			//header file

int main()				//main function

{
	int x,res;			//declared variables x,res
	printf("Enter a number : ");			//asking user to enter a number
	
	scanf("%d",&x);				// Reading input from user
	res=x-5*(
	    (x>=100&&x<=999)
	    &&((x%10)%2!=0)
	    &&((x/100)%2!=0));			//logic for Subtract 5 from a 3-digit number if the one’s and hundred’s digits are odd (without using if)
	{
		printf("res=%d",res);		//print result
	}
	return 0;
}


