/*
Program Name : checkifdigit0anddigit1ina4digitnum.c
Author       : Aishwarya V
Description  : Program about check if digit0 and digit1 in a 4 digit num 
*/


#include <stdio.h>

int main()				//main function

 {
    
     int x;				//declared variable x
    
	printf("Enter a num : ");		//getting input from the user
    
	scanf("%d",&x);
    
	printf("%d",(x >= 1000 && x <= 9999)&&((x%100)/10)==((x%100)%10)); 
	//get a 4 digit num and compare digit 0 ,digit 1 if both are same return 1

    return 0;
}
