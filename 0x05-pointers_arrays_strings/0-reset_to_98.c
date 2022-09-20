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
	int n;
	
	n = 100;
	reset_to_98(&n);

	return (0);
}
