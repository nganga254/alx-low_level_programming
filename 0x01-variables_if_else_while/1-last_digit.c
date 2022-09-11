#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* main - Entry point
 * description : print the last digit of the number stored in the variable n
 * return 0(Always)
 */

int main(void)
/**
 * print the last digit of the number stored in the variable n
 * return 0
 */
{

int n;
int lastDigit;


srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
lastDigit = (n % 10);

if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
	printf("Last digit of %d is %d and is is less than 6 and not 0\n", n, lastDigit);

return (0);
}
