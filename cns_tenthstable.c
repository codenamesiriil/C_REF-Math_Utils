#include <stdio.h>

void	cns_scaledmf10(int n)
{
	int i = 0;
	while (i < 100)
	{
		int j = 0;
		while (j < 10)
		{
			printf("%d,\t", ((i + j) * n));
			j++;
		}
		printf("\n");
		i += 10;
	}
}

void	cns_scaledmf100(int n)
{
	int i = 0;
	while (i < 1000)
	{
		int j = 0;
		while (j < 100)
		{
			printf("%d,\t", ((i + j) * n));
			j += 10;
		}
		printf("\n");
		i += 100;
	}
}

int	main(void)
{
	cns_scaledmf100(6);
	return (0);
}