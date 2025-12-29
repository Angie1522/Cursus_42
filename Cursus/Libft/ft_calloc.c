/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:48:51 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/29 14:07:51 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
//#include <stdio.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*c;
	size_t			i;
	size_t			m;

	m = (nmemb * size);
	if (m > INT_MAX)
		return (NULL);
	c = malloc(m);
	i = 0;
	if (!c)
		return (NULL);
	while (i < m)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
/*int	main(void)
{
	char	*r = ft_calloc(0, 0);
	char	*r1 = calloc(0, 0);
	
	if (!r)
		return (1);
	
	printf("%s\n", r);
	printf("%s\n", r1);
	free(r);
	free(r1);
}*/