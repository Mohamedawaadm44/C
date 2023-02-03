/*
 ============================================================================
 Name        : EX3.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_3
 Description : reverse string
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char array[100];
	char array_copy[100];
	int counter;

	// enter the string
	printf("Enter the string :" );
	fflush(stdin);
	fflush(stdout);
	gets(array);
    int ind= (int) strlen(array);
	// copy array
	for(counter=0;counter<ind;counter++)
	{
		array_copy[counter]=array[counter];
	}

	// reversing
	for(counter=0;counter<ind;counter++)
	{
		array[counter]=array_copy[ind-1-counter];
	}


	printf("%s",array);

	return 0 ;
}
