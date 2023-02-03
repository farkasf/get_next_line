/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffarkas <ffarkas@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:09:58 by ffarkas           #+#    #+#             */
/*   Updated: 2023/02/03 14:31:42 by ffarkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int fd1, fd2, fd3;
	int	i;
	char	*s;
	
	(void)ac;
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
		return 0;
	i = 0;
	while (i < 4)
	{
		s = get_next_line(fd1);
		printf("line %d: %s", i, s);
		s = get_next_line(fd2);
		printf("line %d: %s", i, s);
		s = get_next_line(fd3);
		printf("line %d: %s", i, s);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
