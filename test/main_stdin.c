/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffarkas <ffarkas@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:09:50 by ffarkas           #+#    #+#             */
/*   Updated: 2023/02/03 14:09:52 by ffarkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	char *line;
	int	i;

	i = 0;
	while ((line = get_next_line(0)))
	{
		printf("line %d: %s", i, line);
		free(line);
		i++;
	}
	return (0);
}
