/*
 ============================================================================
 Name        : Lab.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Battern
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , j;
	for (i=0 ;i<=9;i++)
	{
		for (j=0 ;i+j<=9;j++)
		{
			printf("%d",i+j );
		}
		printf("\n" );
	}
	return 0 ;
}
