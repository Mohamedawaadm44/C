/*
 ============================================================================
 Name        : EX2.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_2
 Description : Check vowel or consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

char alphabet;	
printf("Enter an alphabet:\n" );
fflush(stdin);
fflush(stdout);
scanf(" %c", &alphabet);
if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
{
     printf("%c is a vowel\n" , alphabet);
}
else
{
	printf("%c is a consonant\n" , alphabet);
}

return 0 ;
}
