#include <stdio.h>

void	cns_tmstable(void)
{
	int	i = 1;
	while (i <= 10)
	{
		int	j = 1;
		while (j <= 10)
		{
			printf("%3d", (i * j));
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
	cns_tmstable();

	return (0); 
}