/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:50:24 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/30 16:27:30 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	neg = 1;
	while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13))
	{
		i++;
	}
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9' )
	{
		num = num * 10;
		num = num + (ptr[i] - '0');
		i++;
	}
	num = num * neg;
	return (num);
}
/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d\n", atoi("\t\n\r\v\f  469 \n"));
}*/