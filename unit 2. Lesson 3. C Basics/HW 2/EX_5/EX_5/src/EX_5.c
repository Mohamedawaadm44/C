/*
 ============================================================================
 Name        : EX5.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_5
 Description : Check Character is an Alphabet or not
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
if((character>='A' && character<= 'Z')||(character>='a' && character<= 'z'))
{
printf("%c is an Alphabet\n " , character );
}
else
{
printf("%c is not an Alphabet\n  " , character );
}

return 0 ;
}