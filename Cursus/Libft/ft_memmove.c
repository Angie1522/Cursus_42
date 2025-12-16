/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:40:59 by angcasad          #+#    #+#             */
/*   Updated: 2025/12/16 15:29:38 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	char		*tmp_src;
	size_t			i;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	else if (tmp_dst < tmp_src)
	{
		while (i < len)
		{
		tmp_dst[i] = tmp_src[i];
		i++;
		}
	}
	else if (tmp_dst > tmp_src)
	{
		while (len > 0)
		{
			tmp_dst[len - 1] = tmp_src[len - 1];
			len--;
		}
	}
	return (dst);
}
/*int	main(void)
{
	
	char s[] = "1";
	char d[] = "abc";
	char r[] = "1";
	char c[] = "abc";
	
	ft_memmove (s, d, 4);
	printf("%s\n", s);
	
	memmove (r, c, 4);
	printf("%s\n", r);
	return (0);
}*/