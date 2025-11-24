/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:02:43 by angcasad          #+#    #+#             */
/*   Updated: 2025/11/13 15:55:05 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = b;
	while (len > 0)
	{
		*(temp) = (unsigned char) c;
		len--;
		temp++;
	}
	return (b);
}
/*int	main(void)
{
	char str[] = "What";
	int c = 'x';
	ft_memset(str, c, 2);
	printf("%s", str);
	return(0);
}*/
