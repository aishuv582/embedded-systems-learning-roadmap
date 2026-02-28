/*
Program Name : program to print sum from 1 to 5 using loop.c
Author       : Aishwarya V
problemstatement  : Write a loop program to print sum of 1 to 5.
*/

#include <stdio.h>          //header file

int main()      //main function

{
    // Write C code here
    int x=1,sum=0;  //initialising x as 1 and sum as 0
   
   loop:
   if(x<=5)
   {
      sum=sum+x;
     x++;
       goto loop; 
       
        
       
   }
printf("sum=%d",sum);  //print sum
    return 0;
}
