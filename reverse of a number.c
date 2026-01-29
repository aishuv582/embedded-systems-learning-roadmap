#include<stdio.h>

int main()

{
	int x,reverse=0;
	printf("Enter a 3 digit  number: ");
		scanf("%d",&x);
		
	
	if(x>=100 && x<=999)
	{
	   while(x !=0)
	   {
	   	reverse= reverse * 10 + x % 10;
		x = x/10;
	   }	
		printf("Reverse of a number=%d",reverse);
		printf("DEBUG: x = %d\n", x);

	}
	else{
		printf("Enter a valid  number: ");
		
	}
	return 0;
}
