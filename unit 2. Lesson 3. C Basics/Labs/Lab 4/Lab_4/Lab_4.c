/*
 * Lab_4.c
 *
 *  Created on: Jan 16, 2023
 *      Author: Mohamed Awaad
 */

#include<stdio.h>
int main()
{
	int counter=1 , sum=0 ;
	for (;counter<100;counter++)
	{
		sum=sum+counter;
	}
	printf("summation of values between (1 to 99): %d",sum);
	return 0;
}
