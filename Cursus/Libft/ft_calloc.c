/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:48:51 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/04 17:08:54 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*c;
	int	i;

	c = malloc(nmemb * size);
	i = 0;
	while(i < size)
	{
		c[i] = 0;
		i++;
	}
	return(c);
}
int	main(void)
{
	char	*r = ft_calloc(3, sizeof(char));
	char	*r1 = calloc(3, sizeof(char));

	if(!r || !r1)
		return(1);
	else
		printf("%s\n", r);
		printf("%s\n", r1);
	free(r);
	free(r1);
}