 /*
Program Name : program  to print odd numbers from 1 to 9  using for loop.
Author       : Aishwarya V
problemstatement  : Write a loop program  to  print odd numbers from 1 to 9
*/

#include <stdio.h>

int main()
 {
    
    int i;
  
    
    for(i=1;i<=9;i++)
    {
       if(i%2!=0)
       {
         printf("\n%d",i);   
       }
        
    }
    
    return 0;
}
