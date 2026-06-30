 /*
Program Name :loop program to print the sum of two-digit odd numbers whose ten's  digit is 7 .
Author       : Aishwarya V
problemstatement  : Write a loop program to print the sum of two-digit odd numbers whose ten's  digit is 7.

*/

#include <stdio.h>

int main()
 {
    
    int i,sum=0;
  
    
    for(i=11;i<=99;i++)
    {
        if(i%2!=0)
        {
       if(i/10==7)
       {
           sum=sum+i;
        
		   
            
       }
        }
       
    }
    printf("sum=%d",sum); 
    return 0;
}
