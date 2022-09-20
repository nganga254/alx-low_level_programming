void reset_to_98(int *n)
{
	*n = 98;
}

void swap_int(int *a, int *b)
{
	int i;

	int i = *a;
	int *a = *b;
	int *b = i;
}
