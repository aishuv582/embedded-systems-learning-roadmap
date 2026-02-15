/*
Program Name : checkif1st2digitandlast2digit1ina4digitnumaresameornot.c
Author       : Aishwarya V
Description  : Program about check if 1st 2 digit and last 2 digit in a 4 digit num are same or not in a 4 digit num 
*/




#include <stdio.h>			//heder file

int main()					//main function

 {
    int x;					//declared x
    
	printf("Enter a num : ");			//getting input from user
    
	scanf("%d",&x);
    
	printf("%d",(x >= 1000 && x <= 9999)&&((x/100)==(x%100)));	
		//check the condition if 1st 2digit and last 2 digit in a 4 digit num are same or not

    return 0;
}
