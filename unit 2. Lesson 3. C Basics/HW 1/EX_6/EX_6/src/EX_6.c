/*
 ============================================================================
 Name        : EX6.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_6
 Description : Swap Two Float Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

float num1 , num2 , temp;
printf("Enter value of a:" );
fflush(stdin);
fflush(stdout);
scanf("%f", &num1);
printf("Enter value of b:" );
fflush(stdin);
fflush(stdout);
scanf("%f", &num2);
temp = num1;
num1=num2;
num2=temp;
printf("After swapping, value of a = %f\n" ,num1);
printf("After swapping, value of b = %f" ,num2);

return 0 ;
}
