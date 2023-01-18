
/*
 ============================================================================
 Name        : EX3.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_3
 Description : Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int num1 ,num2;
printf("Enter two integers:" );
fflush(stdin);
fflush(stdout);
scanf("%d%d", &num1, &num2);
printf("Sum: %d\n", num1+num2);

return 0 ;
}
