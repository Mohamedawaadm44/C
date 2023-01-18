 /*
 Name        : EX2.c
 Author      : Mohamed_awaad
 Version     :
 Copyright   : Exercise_2
 Description : Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int num;
printf("Enter a integer:\n" );
fflush(stdin);
fflush(stdout);
scanf("%d", &num);
printf("You entered: %d\n" , num);

return 0 ;
}
