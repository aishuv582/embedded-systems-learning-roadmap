/*
Program Name : checkifdigit0anddigit1arenotidenticalina2digitnum.c
Author       : Aishwarya V
Description  : Program about check if digit 0 and digit 1 are not identical 
*/




#include <stdio.h>			//header file

int main()					// main function	
{
    int x;					//declared variable x

    printf("Enter a 2-digit number: ");			//getting a 2 digit input from the user
    scanf("%d", &x);							

    printf("%d", (x/10) != (x%10));			//check if digit 0 and digit 1 are not identical 

    return 0;
}
