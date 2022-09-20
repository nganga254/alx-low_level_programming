#include "header.h"

/**
 * main - Entry point 
 * 
 * descriptioon : a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * 
 * return 0 (Always)
 */
int main(void)
{
	int a;
	int *ptr;

	ptr = &a;
	a = 402;
	reset_to_98(ptr);

	return (0);
}
