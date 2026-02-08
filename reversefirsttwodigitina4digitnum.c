/*
Program Name : reversefirsttwodigitina4digitnum.c
Author       : Aishwarya V
Description  : Program about reversefirsttwodigitina4digitnum
*/
#include<stdio.h>			//heaader file

int main()					//main function		

{
	int x,firstTwo,lastTwo,reversedFirstTwo,result;		//declared  variables 
	printf("Enter a num : ");				//getting an input from the user
	scanf("%d",&x);				//scan the function
	if(x>=1000&&x<=9999)		//condition for 4 digit num
	{
	    firstTwo = x / 100;    // logic for 1st two digit reverse in a 4 digit num
        lastTwo  = x % 100;

reversedFirstTwo = (firstTwo % 10) * 10 + (firstTwo / 10);

result = reversedFirstTwo * 100 + lastTwo;

	reversedFirstTwo=(firstTwo/100)*100+ firstTwo%100;
		printf("reverse of a num: %d",result);			//print the reverse of a num
	}
	else
	{
		printf("Enter a valid input:");
	}
	return 0;
}
