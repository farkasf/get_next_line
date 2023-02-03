/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffarkas <ffarkas@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:10:10 by ffarkas           #+#    #+#             */
/*   Updated: 2023/02/03 14:21:36 by ffarkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int fd;
	int	i;
	char	*s;
	
	(void)ac;
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
