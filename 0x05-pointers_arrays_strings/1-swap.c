void swap_int(int *a, int *b)
{
	int fnum;
	int snum;

	fnum = *a;
	snum = *b;

	*a = *(&snum);
	*b = *(&fnum);
}
