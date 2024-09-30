#include <stdio.h>

void	cns_subtable(void)
{
	int	i = 0;
	while (i <= 10)
	{
		int	j = 0;
		while (j <= 10)
		{
			printf("%2d", (i - j));
			if (j != 10)
				printf(", ");
			j++;
		}
		printf("\n");
		i++;
	}
}

int	main(void)
{
	cns_subtable();

	return (0);
}