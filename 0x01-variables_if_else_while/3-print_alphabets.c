#include <stdio.h>

/**
 * main(void) - Entry point returns value 0
 *
 * description : prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * return 0(Always)
 */

int main(void)
/* main(void) returns the value 0 */
{
	int x;
	int y;
	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	for (y = 'A' ; y <= 'Z' ; y++)
	{
		putchar(x);
	}
	putchar('\n');

return (0);
}
