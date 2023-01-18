/*
 ============================================================================
 Name        : EX7.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_7
 Description : Swap Two Float Numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	float num1 , num2 ;
	printf("Enter the operator + or - or * or /:" );
	fflush(stdin);
	fflush(stdout);
	scanf(" %c", &operator);
	printf("Enter two operands:" );
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&num1, &num2);
	switch(operator)
	{

	case('+'):
		printf("%f%c%f = %f",num1,operator,num2,num1+num2 );
	break;

	case('-'):
		printf("%f%c%f = %f",num1,operator,num2,num1-num2 );
	break;

	case('*'):
		printf("%f%c%f = %f",num1,operator,num2,num1*num2 );
	break;

	case('/'):
		printf("%f%c%f = %f",num1,operator,num2,num1/num2 );
	break;

	}

	return 0 ;
}
