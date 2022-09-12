#include <stdio.h>

/**
 * main - Entry point, function returns (0)
 *
 * description - Use putchar to print out all decimal numbers
 *
 * return 0(Always)
 */

int main(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)
	{
		putchar(x);
	}
	putchar('\n');

return (0);
}
