/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Mohamed_Awaad
 Version     :
 Copyright   : Calculate Circle Area or Circumference
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float r;
	char choice;
    printf("Enter Circle radius:");
	fflush(stdin);
	fflush(stdout);
	scanf(" %f",&r);
	printf("Enter your Choice (a to print the area , c to print the Circumference ):");
	fflush(stdin);
    fflush(stdout);
	scanf(" %c",&choice);
	switch(choice)
	{
	case 'a':
	case 'A':
		printf("\nThe Area =%f",3.14*r*r);
		break;
	case 'c':
	case 'C':
		printf("\nThe Circumference =%f",3.14*2*r);
		break;
	default:
		printf("wrong Choice");

	}

	return 0;
}
