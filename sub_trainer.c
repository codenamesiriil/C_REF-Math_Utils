#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define BUFFER_SIZE 100

void	set_values(int *x, int *y)
{
	while (*x <= *y)
	{
		*x = rand();
		*y = rand();
	}
}

int    main(void)
{

	srand(time(NULL));

    char	buffer[BUFFER_SIZE];
	
	int 	x, y;
	set_values(&x, &y);
    
	printf("%d - %d\n", x, y);
	
	int bytes_read = read(0, buffer, BUFFER_SIZE - 1);
	if (bytes_read == -1)
	{
		perror("read");
		return (1);
	}
	buffer[bytes_read] = '\0';
	
	int value = atoi(buffer);

	if (value == (x - y))
		printf("that's correct!\n");
	else
		printf("wrong answer!\n");
		

	printf("answer: %d\n", (x - y));

    return (0);
}