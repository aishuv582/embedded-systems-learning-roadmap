/*
Program Name : replaceten'sdigitas1.c
Author       : Aishwarya V
Description  : Program about replaceten'sdigitas1
*/

#include<stdio.h>		//header file

int main()

{
	int x,num;		//declared  x,num
	printf("Enter a num: ");			//get the input from the user
	scanf("%d",&x);
	if(x>=10&&x<=99)
	{
		num=1*10+x%10;		//logic for replacing ten's digit by 1'
	
	    printf("num=%d",num);		//print num
	}
	
	else
	{
		printf("Enter a valid input");
	}
	return 0;
	
}
