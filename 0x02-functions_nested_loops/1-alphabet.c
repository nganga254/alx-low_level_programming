#include <stdio.h>

/**
 * main - Entry point
 * description :a function that prints the alphabet, in lowercase,
 * followed by a new line
 * return 0 - main(void) returns value 0
 */

int main(void)
{
	void print_alphabet(void);
	{
		int x;
		for (x = 'a'; x='z'; x++)
		{
			putchar(x);
		}
		printf('\n');
	}
	return(0);
}
