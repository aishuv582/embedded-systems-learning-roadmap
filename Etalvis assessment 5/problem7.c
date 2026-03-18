 /*
Program Name : program  to Write a loop program to print the two-digit odd numbers whose sum of digits are 7 .
Author       : Aishwarya V
problemstatement  : Write a loop program to print the two-digit odd numbers whose sum of digits are 7.

*/

#include <stdio.h>

int main()
 {
    
    int i;
  
    
    for(i=11;i<=99;i++)
    {
       if(i%10=0)
       {
       	if(i%10+i/10==7)
       	{
       		printf("\n%d",i); 
		   }
            
       }
        
    }
    
    return 0;
}
