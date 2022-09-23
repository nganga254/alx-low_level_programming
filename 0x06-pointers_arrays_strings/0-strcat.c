#include "main.h"
#include <stdio.h>

/**
 * MAin - Entry point
 * Description : Concanate two strings
 * return 0 (Always)
 */

char *_strcat();
int main(void)
{
	char *a;
	char *b;

	*a = "Hello ";
	*b = "World!\n";
	char *_strcat(*a,*b);
	return(0);
}
