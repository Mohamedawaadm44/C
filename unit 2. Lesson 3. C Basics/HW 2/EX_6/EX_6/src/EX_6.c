/*
 ============================================================================
 Name        : EX6.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_6
 Description : Sum of an Natural Number
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

int num1 , sum=0 , counter=1 ;	
printf("Enter an interger:" );
fflush(stdin);
fflush(stdout);
scanf("%d", &num1);

for(;counter<=num1;counter++)
{
sum+=counter;
}
printf("Sum = %d\n",sum );


return 0 ;
}