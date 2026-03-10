/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:51:46 by angcasad          #+#    #+#             */
/*   Updated: 2026/03/04 11:06:42 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	atoi_push(const char *ptr)
{
	int	i;
	int	c;
	long	x;

	i = 0;
	x = 0;
	c = 1;

	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			c = c * -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9' )
	{
		x = x * 10;
		x = x + (ptr[i] - '0');
		i++;
	}
	x = x * c;
	if(x > INT_MAX || x < INT_MIN)
		return(write(1, "Error\n", 6), exit(1), 1);
	return (x);
}

int	duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j)
		{
			if (atoi_push(argv[i]) == atoi_push(argv[j]))
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

int error(int argc, char **argv)
{
	int	i;
	int	j;

	if(argc < 2)
		return(write(1, "Error\n", 6), 1);
	i = 1;
	while(argv[i] != NULL)//mientras haya argumentos
	{
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if(argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while(argv[i][j])
		{
			if(ft_isdigit(argv[i][j]) != 1)//si no es TRUE, osea, si no es un digito, entra y da error.
				return(write(1, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	if(duplicate(argc, argv) == 1)
		return(write(1, "Error\n", 6), 1);
	return(0);
}


