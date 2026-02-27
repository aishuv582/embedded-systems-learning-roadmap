/*
Program Name : program to print sum from 6 to 1 using loop.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print sum of 6 to 1.
*/

#include <stdio.h>          //header file

int main()      //main function

{
    // Write C code here
    int x=6,sum=0;  //initialising x as 6  and sum as 0
   
   loop:
   if(x>=1)
   {
      sum=sum+x;
     x--;
       goto loop; 
       
        
       
   }
printf("sum=%d",sum);  //print sum
    return 0;
}
