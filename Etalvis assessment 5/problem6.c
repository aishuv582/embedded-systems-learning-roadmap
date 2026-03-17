 /*
Program Name : program  to print 2 digit odd numbers from below  using for loop.
Author       : Aishwarya V
problemstatement  : Write a loop program  to  print 2 digit odd numbers below 20
*/

#include <stdio.h>

int main()
 {
    
    int i;
  
    
    for(i=11;i<=20;i++)
    {
       if(i%2!=0)
       {
         printf("\n%d",i);   
       }
        
    }
    
    return 0;
}
