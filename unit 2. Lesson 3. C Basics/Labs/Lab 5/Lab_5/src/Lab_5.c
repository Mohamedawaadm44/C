/*
 ============================================================================
 Name        : Lab_5.c
 Author      : 
 Version     :
 Copyright   : Calculate the Average Students Degrees
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int student_num, sum=0 , counter,student_deg;
	printf("Enter the number of students : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", & student_num);
	for(counter=0;counter<student_num;counter++)
	{
		printf("Enter student(%d) degree : ",counter+1);
			fflush(stdin);
			fflush(stdout);
	    scanf("%d", &student_deg);
	    sum = sum +student_deg;
	}
	printf("Average students degree(%f) : ",((float)sum/student_num));
	return 0;
}
