/*
 ============================================================================
 Name        : EX4.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_4
 Description : insert an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[100];
	int counter , inserted_num , location , arraysize;

	// input the number of array elements
	printf("Enter the number of array elements :\n" );
	fflush(stdin);
	fflush(stdout);
	scanf(" %d",&arraysize);
	printf("Enter the array elements :\n" );
	fflush(stdin);
	fflush(stdout);
	//enter array elements before inserting
	for(counter=0;counter<arraysize;counter++)
	{
		scanf(" %d",&array[counter] );
	}

	// input the new element
	printf("Enter the element to be inserted :\n" );
	fflush(stdin);
	fflush(stdout);
	scanf(" %d",&inserted_num);

	// select the location
	printf("Enter the location :\n" );
	fflush(stdin);
	fflush(stdout);
	scanf(" %d",&location);

	// inserting
	for(counter=location-1;counter<=arraysize;counter++)
	{
		array[counter]=array[counter]-inserted_num;
		inserted_num=array[counter]+inserted_num;
		array[counter]=inserted_num-array[counter];
	}



	for(counter=0;counter<=arraysize;counter++)
	{
		printf("%d  ", array[counter]);
	}


	return 0 ;
}
