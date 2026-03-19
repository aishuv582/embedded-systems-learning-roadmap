 /*
Program Name : program  to Write a loop program to print the two-digit even numbers whose sum of digits are 6 .
Author       : Aishwarya V
problemstatement  : Write a loop program to print the two-digit even numbers whose sum of digits are 6.

*/

#include <stdio.h>

int main()
 {
    
    int i;
  
    
    for(i=11;i<=99;i++)
    {
       if(i%2==0)
       {
       	if(i%10+i/10==6)
       	{
       		printf("\n%d",i); 
		   }
            
       }
        
    }
    
    return 0;
}
