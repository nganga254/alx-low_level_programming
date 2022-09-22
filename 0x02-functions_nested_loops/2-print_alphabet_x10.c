#include <stdio.h>
#include "main.h"

/** main - Entry point
 *
 * description : A function that prints the alphabets 10 times
 *
 * return type is 0/void (Always)
 */

int main(void)
{
	int i;
	for(i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
		putchar('\n');
	}
return(0);
}
