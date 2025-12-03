/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:50:24 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/03 19:33:40 by angcasad         ###   ########.fr       */
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
	while(ptr[i] == ' ' || ptr[i] == '+')
	{
		i++;
	}
	if(ptr[i] == '-')
	{
		c = c * -1;
		i++;
	}
	else if(ptr[i] >= 10 && ptr[i] <= 14)
		i++;
	while(ptr[i] >= '0' && ptr[i] <= '9' )
	{
		x = x * 10;
		x = x + (ptr[i] - '0');
		i++;
	}
	x = x * c;	

	return(x);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi(" \n"));
	printf("%d\n", atoi(" \n"));
}*/