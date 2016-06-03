int main()
{
	int i = 10;
	const int *const p3 = &i;
	int *p1 = p3;
	return 0;
}
