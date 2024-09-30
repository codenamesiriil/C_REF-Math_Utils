#include <stdio.h>

void	cns_putmtables(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d X %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}
	printf("\v");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 6; j <= 10; j++)
		{
			printf("%d X %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}
}


int	main(void)
{
	cns_putmtables();
	return (0);
}