void print_alphabet(void)
{
	int x;
	for(x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
}

void print_alphabet_x10(void)
{
	int i;
	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
	}
}

int _islower(int c)
{
	int c;
	if(c >= 'a' && c <= 'z')
		return(1);
	
	else
		return(0);
}
