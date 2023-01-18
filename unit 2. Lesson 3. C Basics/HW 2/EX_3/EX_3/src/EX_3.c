/*
 ============================================================================
 Name        : EX_3.c
 Author      : Mohamed_Awaad
 Version     :
 Copyright   : Comparing Three Numbers
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y , z ;
	printf("Enter three values");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if(x>y)
		{
		if(x>z)
			printf("the largest value is %f", x);
		else
			printf("the largest value is %f", z);
		}
	else if(y>z)
				printf("the largest value is %f", y);
	else
		printf("the largest value is %f", z);
	return 0;
}
