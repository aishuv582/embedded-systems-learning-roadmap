 /*
Program Name : loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.
Author       : Aishwarya V
problemstatement  : Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.

*/




#include <stdio.h>

int main() 
{
  
    
    int x=70,sum=0;
    loop:
    if(x<=79)
    {
        if((x%2!=0)&&(x/10==7))
        {
            sum=sum+x;
        }
        x++;
        goto loop;
    }
    

    return 0;
}
