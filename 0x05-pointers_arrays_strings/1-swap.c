#include "header.h"

/**
 * main - Entry point
 *
 * description :  a function that swaps the values of two integers
 *
 * return 0 (Always)
 */

int main(void)
{
	int a;
	int b;
       
	a = 98;
	b = 42;

	swap_int(&a, &b);

	return (0);
}
