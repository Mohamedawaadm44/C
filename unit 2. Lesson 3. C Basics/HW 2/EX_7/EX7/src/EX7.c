/*
 ============================================================================
 Name        : EX7.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_7
 Description : factorial of number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int num1 , fact=1 , counter=1 ;	
printf("Enter an interger:" );
fflush(stdin);
fflush(stdout);
scanf("%d", &num1);
if(num1<0)
printf("Error !!! factorial of negative number doesn't exist" );
else if(num1==0)
printf("Factorial = 1" );
else 
{
for(;counter<=num1;counter++)
{
fact*=counter;
}
printf("Factorial = %d\n",fact );
}
return 0 ;
}