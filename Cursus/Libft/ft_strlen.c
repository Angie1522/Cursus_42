/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:36:21 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/25 16:04:57 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//len doesn't count the null char
size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*int	main(void)
{
	const char *x;
	
	x = "hola";
	printf("%zu",ft_strlen(x));
	return(0);
}*/