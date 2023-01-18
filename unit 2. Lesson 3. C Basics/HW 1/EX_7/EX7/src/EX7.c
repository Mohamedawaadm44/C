/*
 ============================================================================
 Name        : EX_7.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_7
 Description : Swap Two Float Numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

float num1 , num2 ;
printf("Enter value of a:" );
fflush(stdin);
fflush(stdout);
scanf("%f", &num1);
printf("Enter value of b:" );
fflush(stdin);
fflush(stdout);
scanf("%f", &num2);
num1 = num1 - num2;
num2 = num1 + num2;
num1 = num2 - num1;
printf("After swapping, value of a = %f\n" , num1);
printf("After swapping, value of b = %f" , num2);

return 0 ;
}
