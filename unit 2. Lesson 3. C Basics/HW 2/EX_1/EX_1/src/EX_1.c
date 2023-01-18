/*
 ============================================================================
 Name        : EX1.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_1
 Description : Check the number is even or odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	printf("Enter an integer you want to Check:" );
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even",num );
	else
		printf("%d is odd",num );

	return 0 ;
}
