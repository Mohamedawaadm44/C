/*
 ============================================================================
 Name        : EX5.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_5
 Description : ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

char character;
printf("Enter a character:" );
fflush(stdin);
fflush(stdout);
scanf("%c", &character);
printf("ASCII value of %c = %d" , character ,character);

return 0 ;
}
