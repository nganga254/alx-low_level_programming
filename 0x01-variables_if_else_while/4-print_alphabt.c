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
	for (x = 'a'; x != 'e' && x != 'q' && x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	
return(0);
}
