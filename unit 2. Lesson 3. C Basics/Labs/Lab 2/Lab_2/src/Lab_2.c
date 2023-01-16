/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Mohamed_Awaad
 Version     :
 Copyright   : Comparing Three Numbers
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x , y , z ;
	printf("Enter three values");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
		{
		if(x>z)
			printf("the largest value is %d", x);
		else
			printf("the largest value is %d", z);
		}
	else if(y>z)
				printf("the largest value is %d", y);
	else
		printf("the largest value is %d", z);
	return 0;
}
