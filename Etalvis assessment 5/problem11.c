 /*
Program Name :loop program to get a number from the user and print the total number of digits in that number.
Author : Aishwarya V
problemstatement  : Write a program to get a number from the user and print the total number of digits in that number.
*/
#include <stdio.h>
int main()
 {
    
    int i,count=0,sum=0;
    printf("Enter a number");
    scanf("%d",&i);
  
    
    for(i;i>0;i=i/10)
    {
        count++;
        
	}
    printf("count=%d",count); 
    return 0;
}
