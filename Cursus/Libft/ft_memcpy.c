/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:20:00 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/21 15:35:49 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char dest[] = "Hola";
	char src[] = "Mundo";
	size_t n = 3;
	
	printf("%s\n", (char *)ft_memcpy(dest, src, n));
	printf("%s", (char *)memcpy(dest, src, n));
	return(0);
}*/