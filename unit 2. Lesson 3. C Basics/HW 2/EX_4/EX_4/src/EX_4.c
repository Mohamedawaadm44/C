/*
 ============================================================================
 Name        : EX4.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_4
 Description : Check number positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

float num1;
printf("Enter a number:" );
fflush(stdin);
fflush(stdout);
scanf("%f", &num1);
if(num1>0)
printf("%f is positive\n" , num1);
else if(num1<0)
printf("%f is negative\n" , num1);
else
printf("You entered zero\n");

return 0 ;
}
