/*
 ============================================================================
 Name        : EX1.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_1
 Description : check frequency of character in string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char str [100];
	char character ;
	int counter ,character_counter=0 ;

	// input the string
	printf("Enter a string:" );
	fflush(stdin);
	fflush(stdout);
	gets(str);

	// input the character
	printf("Enter the character:" );
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character );


	// check character frequency
	for(counter=0;counter<=strlen(str);counter++)
	{
		if(str[counter]==character)
			character_counter++;
	}

	// print the frequency
	printf("frequency of %c = %d \n",character,character_counter);


	return 0 ;
}
