#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/**
 * main - Entry point to determine if 
 * number is positive or negative
 * 
 * description :  print whether the number stored
 * in the variable n is positive or negative
 * 
 * return 0(Always)
 */

/* betty style doc for function main goes there */

int main(void)

{

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n>0)
	printf("%d is positive\n",n);
else if (n==0)
	printf("%d is zero\n",n);
else
	printf("%d is negative\n",n);

return (0);

}
