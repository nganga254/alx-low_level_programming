<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

=======
#include "header.h"

/**
 * main - Entry point 
 * 
 * descriptioon : a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98
 * 
 * return 0 (Always)
 */
>>>>>>> 5861a681ed766c9750d5d3be57dc2fb295916c59
int main(void)
{
	int a;
	int *ptr;

<<<<<<< HEAD
	int a = 10;
	ptr = &a;
	
	void reset_to_98(int *ptr);
	
=======
	ptr = &a;
	a = 402;
	reset_to_98(ptr);

>>>>>>> 5861a681ed766c9750d5d3be57dc2fb295916c59
	return (0);
}
