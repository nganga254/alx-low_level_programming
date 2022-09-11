#include <stdio.h>

/**
 * main - Entry point
 *
 * description : print lowercase alphabets
 *
 * return 0(Always)
 */

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return 0;
}
