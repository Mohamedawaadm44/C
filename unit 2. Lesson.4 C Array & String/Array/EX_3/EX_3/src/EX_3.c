/*
 ============================================================================
 Name        : EX3.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_3
 Description : Transpose of matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix[100][100];
	int matrix_transpose[100][100];
	int row,column,counter1,counter2;

	//enter the matrix
	printf("Enter rows and column of matrix:\n" );
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d", &row, &column);
	printf("Enter elements of matrix:\n" );
	for(counter1=0;counter1<row;counter1++)
	{
		for(counter2=0;counter2<column;counter2++)
		{
			printf("Enter elements of a%d%d:" ,counter1+1,counter2+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &matrix[counter1][counter2]);
		}
	}

	//show the matrix
	printf("Entered Matrix:\n");

	for(counter1=0;counter1<row;counter1++)
	{
		for(counter2=0;counter2<column;counter2++)
		{
			printf("%d\t" ,matrix[counter1][counter2]);
		}
		printf("\n");
	}

	//transpose the matrix
	for(counter1=0;counter1<row;counter1++)
	{
		for(counter2=0;counter2<column;counter2++)
		{
			matrix_transpose[counter2][counter1]=matrix[counter1][counter2];
		}
	}

	//show transposed  matrix


	printf("traspose of matrix:\n");

	for(counter1=0;counter1<column;counter1++)
	{
		for(counter2=0;counter2<row;counter2++)
		{
			printf("%d\t" ,matrix_transpose[counter1][counter2]);
		}
		printf("\n");
	}



	return 0 ;
}
