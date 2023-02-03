/*
 ============================================================================
 Name        : EX1.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_1
 Description : Multi dimensional Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float array1[2][2];
	float array2[2][2];
	float sum[2][2];
	int i,j;

	// input the first array elements
	printf("Enter the elements of 1st matrix\n" );
	for(j=0;j<2;j++)
	{

		for(i=0;i<2;i++)
		{
			printf("Enter a%d%d ",j+1,i+1 );
			fflush(stdin);
			fflush(stdout);
			scanf(" %f",&array1[j][i] );
		}
	}

	// input the second array elements
	printf("Enter the elements of 2nd matrix\n" );
	for(j=0;j<2;j++)
	{
		for(i=0;i<2;i++)
		{
			printf("Enter b%d%d ",j+1,i+1 );
			fflush(stdin);
			fflush(stdout);
			scanf(" %f",&array2[j][i] );
		}
	}

	// Summation

	for(j=0;j<2;j++)
	{

		for(i=0;i<2;i++)
		{
			sum[j][i]=array1[j][i]+array2[j][i];
			printf("%f\t", sum[j][i] );
		}
		printf("\n");
	}

	return 0 ;
}
