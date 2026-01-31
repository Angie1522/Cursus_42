/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:50:24 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/16 15:15:53 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	c;
	int	x;

	i = 0;
	x = 0;
	c = 1;
	while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13))
	{
		i++;
	}
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
	return (x);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d\n", atoi("\t\n\r\v\f  469 \n"));
}*/