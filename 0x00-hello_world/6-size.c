#include <stdio.h>

/**
 * main - Entry point
 * description : an algorithm to print the size of 
 * various types on the computer it is compiled and run on
 * return - Always 0(Success)
 */

int main(void) /* main block returns the value 0 */
{
	int intType;
	float floatType;
	char charType;
	long longType;
	double doubleType;

/* sizeof evaluates the value of a variable */
	printf("The size of an int : %zu byte(s)\n", sizeof(intType));
	printf("The size of a float : %zu byte(s)\n", sizeof(floatType));
	printf("The size of a char : %zu byte(s)\n", sizeof(charType));
	printf("The size of a long : %zu byte(s)\n", sizeof(longType));
	printf("The size of double : %zu byte(s)\n", sizeof(doubleType));
}
