#include<stdio.h>

int main()

{
	int x;
	printf("Enter a two digit no: ");		//get a two digit number from user
	scanf("%d",&x);
	if(x>=10 && x<=99)						//condition for a two digit number
	{ 
	

	printf("One's digit = %d", x % 10);			//print ones digit
	
	}
	else
{
		
    
        printf("Please enter a valid two-digit number");			//other 2 digit no any digit more than 2 print no as invalid
    
	}
	
	return 0;
}
