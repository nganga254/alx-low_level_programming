#include <stdio.h>

/**
 * main - Entry point
 *
 * description : print lowercase alphabets
 *
 * return (0)(Always)
 */

int main(void)
{
	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}
