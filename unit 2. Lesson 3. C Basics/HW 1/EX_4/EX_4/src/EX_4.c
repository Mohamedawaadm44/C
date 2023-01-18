/*
 ============================================================================
 Name        : EX4.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_4
 Description : Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

float num1 ,num2;
printf("Enter two integers:" );
fflush(stdin);
fflush(stdout);
scanf("%f%f",&num1,&num2);
printf("Sum: %f\n" , num1*num2);

return 0 ;
}
