   /*
Program Name : reverse.c
Author       : Aishwarya V
Description  : Program about reverse of a number
*/
   
   
   
   
   #include<stdio.h>		//header file

int main()

{
	int n,rev=0;				//declared variables n,rev and rev is intialised to 0
	printf("Enter a number: ");
	scanf("%d",&n);
	
while (n != 0)
{
    rev = rev * 10 + (n % 10);			//condition for reverse of a number
    n = n / 10;
}

   printf("Reverse of a number=%d",rev);
	return 0;
	}
	
