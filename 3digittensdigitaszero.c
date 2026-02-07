/*
Program Name : 3digittensdigitaszero.c
Author       : Aishwarya V
Description  : Program about 3digittensdigitaszero
*/


#include<stdio.h>		//header file

int main()					//main function

{
	int x,sum;			//declared sum,x
	printf("Enter a number: ");			//getting an input from the user
	scanf("%d",&x);
	if(x>=100&&x<=999)				//condition for 3 digit num
	{
		sum=(x/100)*100+((x%100)/10)*0+(x%10);		//logic for tens digit as zer in a 3 digit num
		printf("sum=%d",sum);
	}
	else{
		printf("Enter a valid input");
	}
	return 0;
}
