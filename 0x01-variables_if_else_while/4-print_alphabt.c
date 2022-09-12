#include <stdio.h>

/**
 * main - Entry point with a return value of 0
 *
 * description : print alphabets except q and e
 *
 * return 0 (Always)
 */

int main(void) /* int main(void) returns a value of 0 */
{
	int x;
	do
	{
		putchar(x);
		
		x++;
	}
	while 
	{
		x != 'e' && x != 'q';
	}
	putchar('\n');
	
return(0);
}
