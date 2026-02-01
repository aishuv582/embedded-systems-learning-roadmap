/*Program Name : replaceone'sdigitas2.c
Author       : Aishwarya V
Description  : Program about replaceone'sdigitas2 in a 3 digit num
*/

#include<stdio.h>		//header file

int main()

{
	int x,num;		//declared  x,num
	printf("Enter a num: ");			//get the input from the user
	scanf("%d",&x);
	if(x>=100&&x<=999)
	{
		num=(x/10)*10+2*1;		//logic for replacing one's digit by 2'
	
	    printf("num=%d",num);		//print num
	}
	
	else
	{
		printf("Enter a valid input");
	}
	return 0;
	
}
