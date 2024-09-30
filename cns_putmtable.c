#include <stdio.h>

void	cns_putmtable(int n)
{
	for (int i = 1; i <= 10; i++)
		printf("%d X %d = %d\n", n, i, (n*i));
}

int	main(void)
{
	for (int i = 6; i < 10; i++)
	{
		cns_putmtable(i);
		printf("\n");
	}
	return (0);
}