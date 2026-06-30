 /*
Program Name :loop program to get a number from user and print the reverse of that number
Author : Aishwarya V
problemstatement  : Write a program to get a number from user and print the reverse of that number
*/
#include <stdio.h>
int main()
 {
    
    int i,rev=0;
    printf("Enter a number");
    scanf("%d",&i);
  
    
    for( ;i>0;i=i/10)
    {
        rev=rev*10+i%10;
        
        
	}
    printf("rev=%d",rev); 
    return 0;
}
