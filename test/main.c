#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int fd;
	int	i;
	char	*s;
	
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return 0;
	i = 0;
	while (i < 10)
	{
		s = get_next_line(fd);
		printf("line %d: %s", i, s);
		i++;
	}
	close(fd);
	return (0);
}
