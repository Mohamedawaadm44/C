/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Calculate the Minimum of Two Numbers
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x , y ;
	printf("Enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d", &x, &y);
	printf("the minimum is: %d",(x>y?y:x));
	return 0 ;

}
